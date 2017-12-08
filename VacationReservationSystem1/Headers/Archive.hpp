#pragma once

#ifndef _ARCHIVE_HPP_
#define _ARCHIVE_HPP_

#include <vector>
#include "Record.hpp"
//#include "Vacation"


class Archive {

public:
	void store(Vacation* vac);
	int load();

private:
	std::vector<Record> records;


}
#endif