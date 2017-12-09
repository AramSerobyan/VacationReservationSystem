#include "../Headers/WishlistOfRequests.hpp"
#include "../Headers/CatalogOfVacationRequests.hpp"
#include <string>

bool bCollides(std::pair<timeInfo, timeInfo> a, std::pair<timeInfo, timeInfo> b) {
	int ast = a.first.year * 365 + a.first.month * 12 + a.first.day;
	int aend = a.second.year * 365 + a.second.month * 12 + a.second.day;

	int bst = b.first.year * 365 + b.first.month * 12 + b.first.day;
	int bend = b.second.year * 365 + b.second.month * 12 + b.second.day;

	if (bst > ast && bst < aend) return true;
	if (bend > ast && bend < aend) return true;

	return false;

}
WishlistOfRequests::WishlistOfRequests()
{
	this->counter = 0;
	load();
}

int WishlistOfRequests::load()
{
	return 0;
}
int WishlistOfRequests::newRequest(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval)
{
	int vacId = generateId();
	VacationRequest newRequest = VacationRequest(emp, timeInterval, vacId);
	requests.push_back(newRequest);
	return vacId;
}

int WishlistOfRequests::generateId()
{
	return ++counter;
}
int WishlistOfRequests::updateWishlist(std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests vrc)
{
	std::vector<VacationRequest> reqs;
	reqs = vrc.getRequestsVector();
	CheckingStrategy strategy = vrc.getStrategy();
	for (std::vector<VacationRequest>::iterator it = this->requests.begin(); it != this->requests.end(); ++it)
	{
		if (bCollides(timeInterval, it->getInterval()))
		{
			if (strategy.check(it->getEmployee(), it->getInterval(), reqs))
			{
				it->getEmployee()->newNotification(it->getVacationId());
			}
		}
	}
	return 0;
}