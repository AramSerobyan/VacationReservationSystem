#pragma once
#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

#include <string>
#include <vector>
#include <utility>
#include "Vacation.hpp"
#include "TimeInfo.hpp"
#include "Archive.hpp"
#include "Controller.hpp"
#include "ListOfDepartments.hpp"
#include "CatalogOfVacations.hpp"
#include "WishlistOfRequests.hpp"
#include "CatalogOfVacationRequests.hpp"

class Controller
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
        ListOfEmployees l_emps;
        WishlistOfRequests req_wlist;
        ListOfDepartments departments;
		CatalogOfVacations cat_vac;
		CatalogOfVacationRequests cat_requests;

}


#endif
