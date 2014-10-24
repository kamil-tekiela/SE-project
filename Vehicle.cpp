#include "Vehicle.h"


Vehicle::Vehicle(string carRegNo, accountHolder& account) : owner(account), regNo(carRegNo)
{
}

string Vehicle::getRegNo(){
	return regNo;
}

accountHolder Vehicle::getOwner(){
	return owner;
}