#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

#include<string>
#include<vector>
#include "Department.hpp"

class Employee{
private:
	std::string name;
	std::string email;
	std::string position;


	int Id;
	int vacationDays;
	Department *department;
    std::string status;
    bool hasEmail;
	std::vector<int> mailbox; 

public:
	Employee(int id, std::string name, std::string status, std::string email, int vacationDays, Department* department);
	int getEmployeeId() { return Id; }
	Department* getEmployeeDepartment() { return department; }

	int getVacationDays() { return vacationDays; }
	std::string getStatus() { return status; }
	int updateVacationDays(int num);
	int newNotification(int requestID); 
};
#endif    
