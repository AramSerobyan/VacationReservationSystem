#pragma once
#ifndef _POSITIONPRIORITYSTRATEGY_HPP_
#define _POSITIONPRIORITYSTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>
#include "ListOfDepartments.hpp"
#include "CheckingStrategy.hpp"

class PositionPriorityStrategy : public CheckingStrategy
{

private:
	int check(Employee emp, std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests* vrc);
	ListOfDepartments* departments;
};




#endif