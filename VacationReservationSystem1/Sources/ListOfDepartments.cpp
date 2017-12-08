#include "../Header/ListOfDepartments.hpp"
#include <string>

int ListOfDepartments::load()
{
    return 0;
}

department ListOfDepartments::getDepartment(std::string fname)
{
    for (vector<Department>::iterator it = this->departments.begin(); it < this->departments.end(); ++it)
    {
        if (*it.getname() == fname){
            return *it;
    }

}
