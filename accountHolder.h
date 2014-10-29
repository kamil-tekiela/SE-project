#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Payment.h"
#include "Transponder.h"
#include "Vehicle.h"
#include "Ticket.h"
using namespace std;

class accountHolder
{
public:
	accountHolder(string name);
	string getName();
	int getId();
	void addCar(string regNo);
	bool isTransponderId(int transponderId);
	bool isVehicleReg(string vehicleReg);
	void createTicket(int stationId, int timestamp);
private:
	string name;
	static int idCounter;
	const int id;
	vector<Payment> myPayments;
	vector<Transponder> myTransponders;
	vector<Vehicle> myVehicles;
	vector<Ticket> myTickets;
};

