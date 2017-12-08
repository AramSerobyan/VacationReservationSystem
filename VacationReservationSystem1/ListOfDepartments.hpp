#pragma once
#ifndef _LISTOFDEPARTMENT_HPP_
#define _LISTOFDEPARTMENT_HPP_

#include "Department.hpp"
#include <vector>

class ListOfDeparments {

public:
	std::vector<Department> departments;
	int load();
};


#endif