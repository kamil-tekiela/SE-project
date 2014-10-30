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