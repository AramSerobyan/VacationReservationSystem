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
#include "ListOfEployees.hpp"
#include "CatalogOfVacations.hpp"
#include "WishlistOfRequests.hpp"
#include "CatalogOfVacationRequests.hpp"

class Controller
{
public:
	Controller(ListOfEmployees emps,CatalogOfVacationRequests cvr);
	int  getCompleted(timeInfo date, std::vector<Vacation> &vacations);
	int load();
    int check(int employeeID, std::pair<timeInfo, timeInfo> timeInterval);
    int requestVacation(int employeeID, std::pair<timeInfo, timeInfo> timeInterval);
	int addToWhiteList(bool addQ);
	int cancelRequest(int vacID);
    int initiateVacation(std::pair<timeInfo, timeInfo> interval);
	int completeVacation(std::pair<timeInfo, timeInfo> interval);
	int updateRequest(int requestID, std::pair<timeInfo, timeInfo> interval);
	int getTempEmpId() { return tempEmpId; }
	std::pair<timeInfo, timeInfo> getTempInterval() { return tempInterval; }
private:
		std::vector<Vacation> vacations;
		Archive archive;
        ListOfEmployees l_emps;
        WishlistOfRequests req_wlist;
        ListOfDepartments departments;
		CatalogOfVacations cat_vac;
		CatalogOfVacationRequests cat_requests;
		int tempEmpId;
		std::pair<timeInfo, timeInfo> tempInterval;

};


#endif
