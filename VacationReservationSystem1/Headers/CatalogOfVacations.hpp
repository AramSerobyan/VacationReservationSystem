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
	Vacation* getCompleted(timeInfo date);
	int load();

private:
	std::vector<Vacation> vacations;
};


#endif

