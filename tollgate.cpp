#include "tollgate.h"


tollgate::tollgate(int number)
{
	tollNumber = number;
}

void tollgate::enterMotorway(string carRegNo, vector<Vehicle>& vehicles, vector<accountHolder>& accounts)
{
	cout << "Getting accounts holder information" << endl;
	bool found = false;
	for(int i=0; i<vehicles.size(); i++){
		if(vehicles.at(i).getRegNo() == carRegNo){
			accountHolder user = vehicles.at(i).getOwner();
			cout << "Found accounts holder information" << endl;
			user.createPayment(tollNumber);
			found = true;
			break;
		}
	}
	if(!found){
		cout << "No account is available for this car yet; creating temporary one" << endl;
		cout << "contacting VRA" << endl;
		string VRAaccName = "VRA response name";
		accounts.push_back(accountHolder(VRAaccName));
		vehicles.push_back(Vehicle(carRegNo, accounts.back()));
		accounts.back().createPayment(tollNumber);
	}
}