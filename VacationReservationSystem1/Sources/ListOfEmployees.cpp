#include "..\Headers\ListOfEployees.hpp"
#include <string>

int ListOfEmployees::load()
{

    return 0;
}

Employee* ListOfEmployees::findEmployee(int ID)
{
	for (std::vector<Employee>::iterator it = this->listOfEmployees.begin(); it != this->listOfEmployees.end(); ++it)
	{
		if (it->getEmployeeId() == ID) {
			return &*it;
		}
	}
		return NULL;
}
