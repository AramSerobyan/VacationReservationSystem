#pragma once
#ifndef _CHECKINGSTRATEGY_HPP_
#define _CHECKINGSTRATEGY_HPP_

#include <ctime>
#include "Employee.hpp"
#include "timeInfo.hpp"
#include "VacationRequest.hpp"
#include <utility>


class CheckingStrategy
{

public:
	virtual int check(Employee *emp, std::pair<timeInfo, timeInfo> timeInterval, std::vector<VacationRequest> svrc);
};




#endif