#ifndef _VACATION_HPP_
#define _VACATION_HPP_
#include <string>
#include <ctime>
class vacation {
private:
	time_t startDay;
	time_t endDay;
	int ID;
public:
	int becomeEmpty();
#endif
