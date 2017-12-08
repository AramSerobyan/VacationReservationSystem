#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

#include<string>
#include<vector>

class Employee{
private:
	std::string name;
	std::string email;
	std::string position;


	int Id;
	int vacationDays;
	
    bool status;
    bool hasEmail;
	std::vector<int> mailbox; 

public:
	int getEmoloyeeId() { return Id; }
	int getVacationDays() { return vacationDays; }
	bool getStatus() { return status; }
	int updateVacationDays(int num);
	int newNotification(int requestID); 
}
#endif    
