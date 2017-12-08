#include "../Headers/CatalogOfVacationRequests.hpp"
#include <string>

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
	return vacId;
}

int CatalogOfVacationRequests::generateId()
{
	return ++counter;
}

int CatalogOfVacationRequests::load()
{
	return 0;
}