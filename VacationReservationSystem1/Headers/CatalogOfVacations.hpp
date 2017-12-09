#pragma once
#ifndef _CATALOGOFVACATIONS_HPP_
#define _CATALOGOFVACATIONS_HPP_

#include <string>
#include <vector>
#include "Vacation.hpp"
#include "TimeInfo.hpp"

class CatalogOfVacations 
{
public:
	CatalogOfVacations();
	Vacation* getCompleted(timeInfo date);
	void addVacation(int id, std::pair<timeInfo, timeInfo> timeInterval);
	int load();

private:
	int id;
	std::vector<Vacation*> vacations;
};


#endif

