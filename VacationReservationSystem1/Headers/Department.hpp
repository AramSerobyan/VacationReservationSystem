#ifndef _DEPARTMENT_HPP_
#define _DEPARTMENT_HPP_
#include <string>

class Department {

private:
	std::string name;
	int numberOfEmployees;
	int maxEmplsOnVacations;

public:
	std::string getName() { return name; }
	int getMaxEmplsOnVacations() { return maxEmplsOnVacations; }

};

#endif
