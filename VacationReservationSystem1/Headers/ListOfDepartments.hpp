#pragma once
#ifndef _LISTOFDEPARTMENT_HPP_
#define _LISTOFDEPARTMENT_HPP_

#include "Department.hpp"
#include <vector>

class ListOfDeparments {

public:
	int load();
private:

	std::vector<Department> departments;

};


#endif
