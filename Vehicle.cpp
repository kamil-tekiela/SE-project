#include "Vehicle.h"


Vehicle::Vehicle(string carRegNo) :  regNo(carRegNo)
{
}

string Vehicle::getRegNo(){
	return regNo;
}
