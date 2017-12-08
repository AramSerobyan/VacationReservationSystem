#pragma once
#ifndef _CHECKINGSTRATEGY_HPP_
#define _CHECKINGSTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>


class CheckingStrategy
{

private:
	virtual int check(Employee emp, std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests* vrc);
};




#endif