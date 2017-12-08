#include "../Headers/VacationRequest.hpp"
#include <string>

VacationRequest::VacationRequest(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval, int Id)
{
	this->emp = emp;
	this->department = emp->getEmployeeDepartment();
	this->timeInterval = timeInterval;
	this->vacationID = Id;
}