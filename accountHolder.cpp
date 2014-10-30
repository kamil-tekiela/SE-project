#include "accountHolder.h"

int accountHolder::idCounter = 0;

accountHolder::accountHolder(string name) : id(++idCounter)
{
	this->name = name;
	myTransponders.push_back(Transponder());
	myVehicles.push_back(Vehicle("KE00000"));
}

string accountHolder::getName()
{
	return name;
}

int accountHolder::getId(){
	return id;
}

void accountHolder::addCar(string regNumber){
	myVehicles.push_back(Vehicle(regNumber));
}

bool accountHolder::isTransponderId(int transponderId){
	for(int i=0; i<myTransponders.size(); i++){
			if(myTransponders.at(i).getId() == transponderId){
				return true;
			}
	}
	return false;
}

bool accountHolder::isVehicleReg(string vehicleReg){
	for(int i=0; i<myVehicles.size(); i++){
			if(myVehicles.at(i).getRegNo() == vehicleReg){
				return true;
			}
	}
	return false;
}

void accountHolder::createTicket(int stationId, int timestamp){
	myTickets.push_back(Ticket(stationId, timestamp));
}

void accountHolder::_test_displayTickets(){
	for(int i=0; i<myTickets.size(); i++){
		cout << "Ticket id: " << myTickets.at(i).getId() << endl;
		cout << "Entry Gate: " << myTickets.at(i).getentryGateId() << endl;
		cout << "Exit Gate: " << myTickets.at(i).getexitGateId() << endl;
		time_t t = myTickets.at(i).gettimeDateEntry();
		struct tm * now = &tm(); localtime_s(now, &t);
		cout << "Entry Time: " << now->tm_hour<<':'<<now->tm_min<<' '<<now->tm_mday<<'/'<<now->tm_mon<<'/'<<(now->tm_year+1900) << endl;
		cout << "Exit Time: " << myTickets.at(i).gettimeDateExit() << endl;
		cout << endl;
	}
}