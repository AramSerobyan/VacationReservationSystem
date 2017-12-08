#include "../Headers/Employee.hpp"

int Employee::updateVacationDays(int num){

    vacationDays += num; 
	if (vacationDays < 0)
	{
		vacationDays = 0;
	}
    return 0;
}
Employee::Employee(int id,std::string name, std::string status, std::string email, int vacationDays, Department* department) {

	this->Id = id;
	this->name = name;
	this->status = status;
	this->email = email;
	this->vacationDays = vacationDays;
	this->department = department;
}

int Employee::newNotification(int RequestID)
{
    this->mailbox.push_back(RequestID);
    this->hasEmail = true;
    return 0;
}

