#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <time.h>

#include "Transponder.h"
#include "Ticket.h"
#include "Vehicle.h"
using namespace std;

class TempAccount
{
public:
	TempAccount(string vehicleDetails, int stationId, int timestamp);
	void _test_display();
private:
	static int idCounter;
	const int id;
	Vehicle *car;
	Ticket *ticket;
	string name;
};

