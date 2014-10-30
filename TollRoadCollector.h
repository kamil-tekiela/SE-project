#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "accountHolder.h"
#include "Vehicle.h"
#include "TempAccount.h"


class TollRoadCollector
{
public:
	TollRoadCollector();
	void vehicleDetected(int transponderId, string vehicleReg, int timestamp, int stationId);
	bool enterRegistrationDetails(string carRegistration);
private:
	vector<accountHolder> myAccounts;
	vector<TempAccount> myTempAccounts;
};