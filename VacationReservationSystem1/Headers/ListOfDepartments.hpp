#pragma once
#ifndef _LISTOFDEPARTMENTS_HPP_
#define _LISTOFDEPARTMENTS_HPP_

#include "Department.hpp"
#include <vector>

class ListOfDepartments {

public:

	Department* getDepartment(std::string name);
	int load();
private:

	std::vector<Department> departments;

};


#endif

