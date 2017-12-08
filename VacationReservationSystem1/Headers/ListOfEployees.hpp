#pragma once
#ifndef _LISTOFEMPLOYEES_HPP_
#define _LISTOFEMPLOYEES_HPP_
#include "Employee.hpp"
#include <vector>
class ListOfEmployees{ 

public:
	ListOfEmployees();
	 Employee* findEmployee(int ID);
     int load();
private: 
	std::vector<Employee> listOfEmployees; 
};
#endif

