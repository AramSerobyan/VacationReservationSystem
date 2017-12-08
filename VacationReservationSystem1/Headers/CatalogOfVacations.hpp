#pragma once
#ifndef _CATALOGOFVACATIONS_HPP_
#define _CATALOGOFVACATIONS_HPP_

#include <string>
#include <vector>
#include "Vacation.hpp"

class CatalogOfVacations 
{
public:
	Vacation* getCompleted(time_t date);
	int load();

private:
	std::vector<Vacation> vacations;
}


#endif
