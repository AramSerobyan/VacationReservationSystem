#include "../Headers/Employee.hpp"

int Employee::updateVacationDays(int num){

    this->vacationDays = num; 
    return 0;
}

int Employee::newNotification(int RequestID)
{
    this->mailbox.push_back(RequestID);
    this->hasEmail = true;
    return 0;
}

