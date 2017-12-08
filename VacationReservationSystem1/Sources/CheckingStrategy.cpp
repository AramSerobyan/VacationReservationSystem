#include "../Headers/CheckingStrategy.hpp"

bool collidesQ(std::pair<timeInfo, timeInfo> a, std::pair<timeInfo, timeInfo> b) {
	int ast = a.first.year * 365 + a.first.month * 12 + a.first.day;
	int aend = a.second.year * 365 + a.second.month * 12 + a.second.day;

	int bst = b.first.year * 365 + b.first.month * 12 + b.first.day;
	int bend = b.second.year * 365 + b.second.month * 12 + b.second.day;

	if (bst > ast && bst < aend) return true;
	if (bend > ast && bend < aend) return true;
	
	return false;

}

int CheckingStrategy::check(Employee *emp, std::pair<timeInfo, timeInfo> timeInterval,
	std::vector<VacationRequest> vrc) {
	std::string deptName = emp->getEmployeeDepartment()->getName();
	std::pair<timeInfo, timeInfo> tmpInterval;
	int maxEmplsOnVac = emp->getEmployeeDepartment()->getMaxEmplsOnVacations();
	bool collisionQ = false;
	int cnt = 0;
	for (std::vector<VacationRequest>::iterator it = vrc.begin(); it != vrc.end(); ++it)
	{
		if (it->getDepartmentName() != deptName) continue;
		//tmpInterval = it->getInterval();
		collisionQ = collidesQ(it->getInterval(), timeInterval);
		if (collidesQ) cnt++;
		if (cnt >= maxEmplsOnVac) return false;
	}
	return true;
}
