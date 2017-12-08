#pragma once
#ifndef _COMPOSITESTRATEGY_HPP_
#define _COMPOSITESTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>
#include "ListOfDepartments.hpp"
#include "CheckingStrategy.hpp"

class CompositeStrategy : public CheckingStrategy
{

private:
	int check(Employee emp, std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests* vrc);
	std::vector<CheckingStrategy> strategies;
	int load();
};




#endif