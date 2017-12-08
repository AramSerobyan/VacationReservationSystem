#ifndef _VACATION_REQUEST_HPP_
#define _VACATION_REQUEST_HPP_
#include <string>
#include <TimeInfo.hpp>
#include <Department.hpp>
#include <utility>
class VacationRequest{
private:
	int vacationID;
	std::pair<timeInfo, timeInfo> timeInterval;
    Department department; 
public:
	int becomeEmpty(bool isCancelled);
	int checkIntersection(std::pair<timeinfo, timeinfo>, bool *res)
}


#endif
