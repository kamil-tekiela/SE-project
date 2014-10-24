#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "accountHolder.h"
#include "Vehicle.h"
using namespace std;

class tollgate
{
public:
	tollgate(int);
	void enterMotorway(string carRegNo, vector<Vehicle>&, vector<accountHolder>& );
private:
	int tollNumber;
};

