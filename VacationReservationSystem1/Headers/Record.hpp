#pragma once
#ifndef _RECORD_HPP_
#define _RECORD_HPP_

#include "TimeInfo.hpp"
#include "Vacation.hpp"

class Record 
{
public:
	Record(Vacation* vac);

	int getEmoloyeeId() { return employeeId; }
	timeInfo getStartDay() { return startDay; }
	timeInfo getEndDay() { return endDay; }

private:
	int employeeId;
	timeInfo startDay;
	timeInfo endDay;
};




#endif