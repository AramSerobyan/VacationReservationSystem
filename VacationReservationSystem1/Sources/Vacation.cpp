	
#include "../Headers/Vacation.hpp"

Vacation::Vacation(Employee emp, timeInfo startDay, timeInfo endDay)
{
	this->emp = emp;
	this->startDay = startDay;
	this->endDay = endDay;
}