#pragma once

#ifndef _ARCHIVE_HPP_
#define _ARCHIVE_HPP_

#include <vector>
#include "Record.hpp"
#include "Vacation.hpp"


class Archive {

public:
	void store(std::vector<Vacation> vacations);
	int load();

private:
	std::vector<Record> records;


}
#endif