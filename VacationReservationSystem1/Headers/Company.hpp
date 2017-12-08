#ifndef _COMPANY_HPP_
#define _COMPANY_HPP_

#include <string>
#include "Archive.hpp"
#include  "ListOfDepartments.hpp"
#include "WishlistOfRequests.hpp"
//#include "ListOfEmployees.hpp"
#include "Controller.hpp"
#include ""

class Company {

private:
	std::string name;
	std::string address;
	std::string email;
	Archive archive;
	Controller controller;
	ListOfEmployees l_emps;
	WishlistOfRequests req_wlist;
	ListOfDepartments departments;
	CatalogOfVacations CatalogOfVacationsRequests;
	vac_catalog vrec_catalog; 
public:
	int startUp()

};


#endif
