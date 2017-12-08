#pragma once
#ifndef _CATALOGOFVACATONREQUESTS_HPP_
#define __CATALOGOFVACATONREQUESTS_HPP_

#include <string>
#include <vector>
#include "TimeInfo.hpp"
#include "VacationRequest.hpp"
#include "CatalogOfVacations.hpp"
#include "Employee.hpp"
#include "CheckingStrategy.hpp"

class CatalogOfVacationRequests
{
public:
	CatalogOfVacationRequests();
	int check(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval);
	int newRequest(Employee* emp, std::pair<timeInfo, timeInfo> timeInterval);
	int completeRequests(timeInfo date);
	int getRequest(int Id, VacationRequest &VacReq);
	int removeRequest(int Id, bool isCancelled);
	int initiateVacations(timeInfo date, CatalogOfVacations vc);
	int updateRequest(int rId, std::pair<timeInfo, timeInfo> timeInterval);
	int load();

private:
	CheckingStrategy strategy;
	std::vector<VacationRequest> requests;
	int generateId();
	int counter;
};


#endif
