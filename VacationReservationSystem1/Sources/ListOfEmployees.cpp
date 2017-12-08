#include "..\Headers\ListOfEployees.hpp"
#include <string>

ListOfEmployees::ListOfEmployees()
{
	load();
}

int ListOfEmployees::load()
{
	Department* dep = new Department("A", 2);
	Employee emp = Employee(1, "A", "U", "E", 20, dep );
	listOfEmployees.push_back(emp);
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
