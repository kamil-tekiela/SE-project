#include "main.h"

int main()
{
	vector<accountHolder> accounts;
	accounts.push_back(accountHolder("Chris Meudec"));
	
	vector<Vehicle> vehicles;
	vehicles.push_back(Vehicle("KE045445", accounts.at(0)));

	tollgate toll1(1);

	//road user enters motorway
	toll1.enterMotorway("KE045445", vehicles, accounts);
	cout << endl;
	toll1.enterMotorway("KE04445", vehicles, accounts);
	cout << endl;
	toll1.enterMotorway("KE04445", vehicles, accounts);
	cout << endl;

}

