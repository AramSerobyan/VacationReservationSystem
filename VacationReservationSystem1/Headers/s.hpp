#pragma once

#ifndef _COMPOSITESTRATEGY_HPP_
#define _COMPOSITESTRATEGY_HPP_

#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>
#include "CheckingStrategy.hpp"

class CompositeStrastegy : public CheckingStrategy
{

public:
	int check(Employee emp, std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests* vrc);
	std::vector<CheckingStrategy> strategies;
	int load();
};


#endif