#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

#include<string>
#include<vector>

class Employee{
private:
	std::string name;
	std::string email;
	std::string position;


	int ID;
	int VacationDays;
	
    bool status;
    bool hasEmail;
	std::vector<int> mailbox; 

public:
	int updateVacationDays(int num);
	int newNotification(int requestID); 
}
#endif    
