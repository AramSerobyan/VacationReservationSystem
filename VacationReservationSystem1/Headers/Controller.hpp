#pragma once
#ifndef _CATALOGOFVACATIONS_HPP_
#define _CATALOGOFVACATIONS_HPP_

#include <string>
#include <vector>
#include <utility>
#include "Vacation.hpp"
#include "TimeInfo.hpp"
#include "Archive.hpp"
#include "Controller.hpp"
#include "ListOfDepartments.hpp"
#include "CatalogOfVacations.hpp"
#include "WislistOfRequests"
class CatalogOfVacations 
{
public:
	int  getCompleted(timeInfo date, &vector<Vaction> vacations);
	int load();
        int check(int employeeID, std::pair<timeInfo, timeInfo> timeInterval, bool *res);
        int requestVacation(int employeeID, std::pair<timeInfo, timeInfo> timeInterval, bool *res);
	int addToWhiteList(bool addQ);
	int cancelRequest(int vacID);
        int initiateVacation(std::pair<timeInfo, timeInfo> interval);
	int completeVacation(std::pair<timeInfo, timeInfo> interval);
	int updateRequest(int requestID, std::pair<timeInfo, timeInfo> interval);
private:
	std::vector<Vacation> vacations;
	Archive archive;
        Controller controller;
        ListOfEmployees l_emps;
        WishlistOfRequests req_wlist;
        ListOfDepartments departments;
        CatalogOfVacations CatalogOfVacationsRequests;

}


#endif
