#include "../Headers/CatalogOfVacationRequests.hpp"
#include "../Headers/WishlistOfRequests.hpp"
#include <string>
#include <iostream>
CatalogOfVacationRequests::CatalogOfVacationRequests()
{
	this->counter = 0;
	load();
}

int CatalogOfVacationRequests::newRequest(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval)
{
	int vacId = generateId();
	VacationRequest newRequest = VacationRequest(emp, timeInterval, vacId);
	requests.push_back(newRequest);
	std::cout << " new request added";
	return vacId;
}

int CatalogOfVacationRequests::generateId()
{
	return ++counter;
}

int CatalogOfVacationRequests::updateRequest(int rId, std::pair<timeInfo, timeInfo> timeInterval)
{
	VacationRequest* temp = getRequest(rId);
	std::pair<timeInfo, timeInfo> tm = temp->getInterval();
	bool begin = tm.first.compare(&timeInterval.first);
	bool end = tm.second.compare(&timeInterval.second);
	if (begin && !end)
	{
		temp->setInterval(timeInterval);
		
	}
	else if (!begin && end)
	{
		timeInfo tm1 = timeInfo();
		tm1.year = timeInterval.first.year;
		tm1.month = timeInterval.first.month;
		tm1.day = timeInterval.first.day;
		timeInfo tm2 = timeInfo();
		tm2.year = tm.first.year;
		tm2.month = tm.first.month;
		tm2.day = tm.first.day;
		std::pair<timeInfo, timeInfo> newInterval = { tm1,tm2 };
		if (check(temp->getEmployee(), newInterval))
		{
			temp->setInterval(timeInterval);
		}
	}
	else if (!begin && !end)
	{
		timeInfo tm1 = timeInfo();
		tm1.year = timeInterval.first.year;
		tm1.month = timeInterval.first.month;
		tm1.day = timeInterval.first.day;
		timeInfo tm2 = timeInfo();
		tm2.year = tm.first.year;
		tm2.month = tm.first.month;
		tm2.day = tm.first.day;
		timeInfo tm3 = timeInfo();
		tm3.year = timeInterval.second.year;
		tm3.month = timeInterval.second.month;
		tm3.day = timeInterval.second.day;
		timeInfo tm4 = timeInfo();
		tm4.year = tm.second.year;
		tm4.month = tm.second.month;
		tm4.day = tm.second.day;
		std::pair<timeInfo, timeInfo> newInterval = { tm1,tm2 };
		std::pair<timeInfo, timeInfo> newInterval2 = { tm3,tm4 };
		if (check(temp->getEmployee(), newInterval) && check(temp->getEmployee(), newInterval2))
		{
			temp->setInterval(timeInterval);
		}
	}
	else if (begin && !end)
	{
		timeInfo tm3 = timeInfo();
		tm3.year = timeInterval.second.year;
		tm3.month = timeInterval.second.month;
		tm3.day = timeInterval.second.day;
		timeInfo tm4 = timeInfo();
		tm4.year = tm.second.year;
		tm4.month = tm.second.month;
		tm4.day = tm.second.day;
		std::pair<timeInfo, timeInfo> newInterval2 = { tm3,tm4 };
		if ( check(temp->getEmployee(), newInterval2))
		{
			temp->setInterval(timeInterval);
		}
	}

	return 0;
}

int CatalogOfVacationRequests::load()
{
	return 0;
}

int CatalogOfVacationRequests::check(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval)
{
	int err = strategy.check(emp, timeInterval, requests);
	if (!err) {
		return 0;
	}
	return err;
}
VacationRequest* CatalogOfVacationRequests::getRequest(int Id)
{
	for (std::vector<VacationRequest>::iterator it = this->requests.begin(); it != this->requests.end(); ++it)
	{
		if (it->getVacationId() == Id) {
			return &*it;
		}
	}
	return NULL;
}

int CatalogOfVacationRequests::removeRequest(int Id, bool isCancelled)
{

	for (std::vector<VacationRequest>::iterator it = this->requests.begin(); it != this->requests.end(); ++it)
	{
		if (it->getVacationId() == Id) {
			it->becomeEmpty(true);
			requests.erase(it);
			return 1;
		}
		//counter++;
	}
	return 0;

}
