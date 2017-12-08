	
#include "../Headers/Controller.hpp"

int Controller::requestVacation(int employeeID, std::pair<timeInfo, timeInfo> timeInterval)
{
	Employee* emp = this->l_emps.findEmployee(employeeID);
	int vacId = this->cat_requests.newRequest(emp, timeInterval);
	emp->updateVacationDays(-(timeInterval.first.difference(&timeInterval.second, &timeInterval.first)));
	return vacId;
}