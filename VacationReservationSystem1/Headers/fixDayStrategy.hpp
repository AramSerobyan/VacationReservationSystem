#pragma once
#ifndef _FIXDAYSTRATEGY_HPP_
#define _FIXDAYSTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "CatalogOfVacationRequests.hpp"
#include <utility>
#include "ListOfDepartments.hpp"
#include "CheckingStrategy.hpp"

class fixDayStrategy : public CheckingStrategy
{

private:
	virtual int check(Employee emp);
};




#endif