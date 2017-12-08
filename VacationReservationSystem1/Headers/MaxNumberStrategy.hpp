#pragma once
#ifndef _MAXNUMBERSTRATEGY_HPP_
#define _MAXNUMBERSTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>
#include "ListOfDepartments.hpp"
#include "CheckingStrategy.hpp"

class MaxNumberStrategy : public CheckingStrategy
{

private:
	virtual int check(Employee emp, std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests* vrc);
	ListOfDepartments* departments;
};




#endif