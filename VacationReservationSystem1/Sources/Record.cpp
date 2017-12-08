	
#include "../Headers/Record.hpp"

Record::Record(Vacation* vac)
{
	employeeId =vac->getEmployee().getEmoloyeeId();
	startDay = vac->getStartDay();
	endDay = vac->getEndDay();
}