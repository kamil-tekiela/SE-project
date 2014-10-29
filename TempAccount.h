#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Payment.h"
#include "Transponder.h"
#include "Vehicle.h"
using namespace std;

class TempAccount
{
public:
	TempAccount(string vehicleDetails, int stationId, int timestamp);
private:
	static int idCounter;
	const int id;
	Vehicle *car;
	string name;
};

