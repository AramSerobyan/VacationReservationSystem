#pragma once
#ifndef _WISHLISTOFREQUESTS_HPP_
#define _WISHLISTOFREQUESTS_HPP_

#include <string>
#include <vector>
#include "VacationRequest.hpp"

class WishlistOfRequests
{
public:
	int newRequest(int empId,std::pair<time_t,time_t> timeInterval)

private:
	std::vector<VacationRequest> requests;
}


#endif
