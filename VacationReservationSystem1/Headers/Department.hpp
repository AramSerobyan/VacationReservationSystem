#ifndef _DEPARTMENT_HPP_
#define _DEPARTMENT_HPP_
#include <string>

class Department {

private:
	std::string name;
	int numberOfEmployees;
	int maxEmplsOnVacations;

public:
	Department(std::string name, int num)
	{
		this->name = name;
		this->maxEmplsOnVacations = num;
	}
	std::string getName() { return name; }
	int getMaxEmplsOnVacations() { return maxEmplsOnVacations; }

};

#endif
