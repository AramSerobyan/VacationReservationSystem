#pragma once

#if !defined(_TIMEINFO_H)
#define _TIMEINFO_H

#include <tuple>

struct timeInfo {
	int year;
	int month;
	int day;

	timeInfo() { year = 2000; month = 1; day = 1; };
	bool compare(timeInfo* tm)
	{
		return std::tie(tm->year, tm->month, tm->day) <=
			std::tie(this->year, this->month, this->day);
	}

	void operator=(timeInfo* tm) const
	{
		tm->year = this->year;
		tm->month = this->month;
		tm->day = this->day;
		return;
	}

	int difference(timeInfo* tm,timeInfo* tm2)
	{
		return ((tm->year * 365 + tm->month * 12 + tm->day) - (tm2->year * 365 + tm2->month * 12 + tm2->day));
	}

};

#endif