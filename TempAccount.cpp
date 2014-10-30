#include "TempAccount.h"

int TempAccount::idCounter = 0;

TempAccount::TempAccount(string vehicleDetails, int stationId, int timestamp) : id(++idCounter)
{
	car = new Vehicle(vehicleDetails);
	ticket = new Ticket(stationId, timestamp);
	name = vehicleDetails;
}


void TempAccount::_test_display(){
		cout << "Ticket id: " << ticket->getId() << endl;
		cout << "Entry Gate: " << ticket->getentryGateId() << endl;
		cout << "Exit Gate: " << ticket->getexitGateId() << endl;
		time_t t = ticket->gettimeDateEntry();
		struct tm * now = &tm(); localtime_s(now, &t);
		cout << "Entry Time: " << now->tm_hour<<':'<<now->tm_min<<' '<<now->tm_mday<<'/'<<now->tm_mon<<'/'<<(now->tm_year+1900) << endl;
		cout << "Exit Time: " << ticket->gettimeDateExit() << endl;
		cout << endl;
}