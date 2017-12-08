#pragma once
#ifndef _WISHLISTOFREQUESTS_HPP_
#define _WISHLISTOFREQUESTS_HPP_

#include <string>
#include <vector>
#include "TimeInfo.hpp"
#include "VacationRequest.hpp"


class WishlistOfRequests
{
public:
	int newRequest(int empId, std::pair<timeInfo, timeInfo> timeInterval);
	int generateId();
	int updateWishlist(std::pair<timeInfo, timeInfo> timeInterval, CatalogOfVacationRequests vrc);
	int clearRequests();
	int load();

private:
	std::vector<VacationRequest> requests;
};


#endif
