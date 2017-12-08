#include "../Headers/ListOfDepartments.hpp"
#include <string>

int ListOfDepartments::load()
{
	Department dep = Department("A", 2);
	departments.push_back(dep);
    return 0;
}

Department* ListOfDepartments::getDepartment(std::string fname)
{
    for (std::vector<Department>::iterator it = this->departments.begin(); it != this->departments.end(); ++it)
    {
		if (it->getName() == fname) {
			Department dep = *it;
			return &dep;
		} 
    }
		return NULL;
}
