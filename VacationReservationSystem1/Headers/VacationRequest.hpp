#ifndef _VACATION_REQUEST_HPP_
#define _VACATION_REQUEST_HPP_
#include <string>
#include "TimeInfo.hpp"
#include "Department.hpp"
#include "Employee.hpp"
#include <utility>

class VacationRequest {
private:
	int vacationID;
	std::pair<timeInfo, timeInfo> timeInterval;
	Department* department;
	Employee* emp;
public:
	int becomeEmpty(bool isCancelled);
	int checkIntersection(std::pair<timeInfo, timeInfo>, bool *res);
	VacationRequest(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval, int Id);
};


#endif
