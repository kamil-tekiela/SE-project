#include "TempAccount.h"

int TempAccount::idCounter = 0;

TempAccount::TempAccount(string vehicleDetails, int stationId, int timestamp) : id(++idCounter)
{
	car = new Vehicle(vehicleDetails);
	name = vehicleDetails;
}