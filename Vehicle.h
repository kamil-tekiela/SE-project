#pragma once
#include <string>
#include "accountHolder.h"

class Vehicle
{
public:
	Vehicle(string carRegNo, accountHolder&);
	string getRegNo();
	accountHolder getOwner();
private:
	const string regNo;
	accountHolder& owner;
};

