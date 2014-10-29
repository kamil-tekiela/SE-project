#pragma once
#include <string>
using namespace std;

class Vehicle
{
public:
	Vehicle(string carRegNo);
	string getRegNo();
private:
	const string regNo;
};

