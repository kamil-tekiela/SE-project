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
	void _test_displayTicketsForAccountId(int id);
	void _test_displayTempAccounts();
	void _test_displayVehiclesForAccountId(int id);
private:
	vector<accountHolder> myAccounts;
	vector<TempAccount> myTempAccounts;
};