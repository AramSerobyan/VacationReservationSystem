#include "../Headers/Archive.hpp"	
#include "../Headers/Record.hpp"
#include "../Headers/Controller.hpp"
#include "../Headers/TimeInfo.hpp"
#include <string>
#include <iostream>
#include <utility>
int main()
{
	Department* dep = new Department("A", 2);
	Employee emp = Employee(1, "A", "U", "E", 20,dep);
	ListOfEmployees emps = ListOfEmployees();
	CatalogOfVacationRequests cvr = CatalogOfVacationRequests();
	WishlistOfRequests wlist = WishlistOfRequests();
	Controller c = Controller(emps,cvr,wlist);
	timeInfo tm1 = timeInfo();
	timeInfo tm2 = timeInfo();
	tm2.day = 12;
	std::pair<timeInfo, timeInfo> tm = {tm1 ,tm2};
	c.requestVacation(1, tm);
	std::cout << c.check(1, tm);
	c.requestVacation(1, tm);
	std::cout<<c.check(1, tm);
	c.requestVacation(1, tm);
	std::cout << c.check(1, tm);

	return 0;
}