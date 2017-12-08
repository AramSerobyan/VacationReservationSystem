#ifndef _VACATION_HPP_
#define _VACATION_HPP_
#include <string>
#include "timeInfo.hpp"
#include "Employee.hpp"

class Vacation {
private:
	timeInfo startDay;
	timeInfo endDay;
	Employee emp;
	int Id;
public:
	Employee getEmployee() { return emp; }
	int getId() { return Id; }
	timeInfo getStartDay() { return startDay; }
	timeInfo getEndDay() { return endDay; }
	int becomeEmpty();

};
#endif
