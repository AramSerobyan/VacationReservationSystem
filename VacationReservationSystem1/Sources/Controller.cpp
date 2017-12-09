	
#include "../Headers/Controller.hpp"
#include <iostream>

Controller::Controller(ListOfEmployees emps, CatalogOfVacationRequests cvr, WishlistOfRequests wlist)
{
	this->l_emps = emps;
	this->cat_requests = cvr;
	this->wlist = wlist;
}

int Controller::requestVacation(int employeeID, std::pair<timeInfo, timeInfo> timeInterval)
{
	Employee* emp = this->l_emps.findEmployee(employeeID);
	int vacId = this->cat_requests.newRequest(emp, timeInterval);
	emp->updateVacationDays(-(timeInterval.first.difference(&timeInterval.second, &timeInterval.first)));
	return vacId;
}
int Controller::addToWhiteList(bool bToAdd)
{
	if (!bToAdd) false;

	Employee* emp = this->l_emps.findEmployee(tempEmpId);
	return wlist.newRequest(emp, tempInterval);


}
int Controller::cancelRequest(int id)
{
	VacationRequest* vr = cat_requests.getRequest(id);
	tempInterval = vr->getInterval();
	cat_requests.removeRequest(id, true);
	wlist.updateWishlist(tempInterval, cat_requests);
	return 0;
}
int Controller::initiateVacation(std::pair<timeInfo, timeInfo> interval)
{
	return 0;
}
int Controller::completeVacation(std::pair<timeInfo, timeInfo> interval)
{
	return 0;
}
int Controller::updateRequest(int requestID, std::pair<timeInfo, timeInfo> interval)
{
	cat_requests.updateRequest(requestID, interval);
	return 0;
}
int Controller::check(int employeeID, std::pair<timeInfo, timeInfo> timeInterval)
{
	Employee* emp = this->l_emps.findEmployee(employeeID);
	if (!cat_requests.check(emp, timeInterval))
	{
		this->tempEmpId = employeeID;
		this->tempInterval = timeInterval;
		std::cout << "\n Do you want to add this to your wishlisht, anything but yes is no \n";
		std::string str;
		std::cin >> str;
		if (str == "yes")
			return addToWhiteList(true);
		return 0;
	}
	return 1;
}