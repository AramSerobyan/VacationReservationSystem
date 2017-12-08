#pragma once
#ifndef _LISTOFDEPARTMENT_HPP_
#define _LISTOFDEPARTMENT_HPP_

#include "Department.hpp"
#include <vector>

class ListOfDepartments {

public:
	int getDepartment(std::string name);
	std::vector<Department> departments;
	int load();
};


#endif