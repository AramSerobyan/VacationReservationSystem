	
#include "../Headers/Archive.hpp"

Archive::Archive()
{
	load();
}

void Archive::store(std::vector<Vacation> vacations)
{
	for (std::vector<Vacation>::iterator iter = vacations.begin(); iter != vacations.end(); ++iter)
	{
		Record a = Record(*iter);
		records.push_back(a);
	}
}

int Archive::load()
{

}

