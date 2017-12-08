	
#include "../Headers/Record.hpp"

Record::Record(Vacation vac)
{
	employeeId = vac.getEmployee()->getEmployeeId();
	startDay = vac.getStartDay();
	endDay = vac.getEndDay();
}