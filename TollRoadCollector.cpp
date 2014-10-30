#include "TollRoadCollector.h"


TollRoadCollector::TollRoadCollector()
{
	myAccounts.push_back(accountHolder("Chris Meudec"));
}

void TollRoadCollector::vehicleDetected(int transponderId, string vehicleReg, int timestamp, int stationId){
	
	bool found = false;
	int i;
	if(transponderId){
		for(i=0; i<myAccounts.size(); i++){
			if(myAccounts.at(i).isTransponderId(transponderId)){ 
				found = true;
				cout << "... found transponder id" << endl;
				break;
			}
		}
	}
	if(!found && vehicleReg != ""){
		for(i=0; i<myAccounts.size(); i++){
			if(myAccounts.at(i).isVehicleReg(vehicleReg)){ 
				found = true;
				cout << "... found by car registration number" << endl;
				break;
			}
		}
	}

	if(found){
		myAccounts.at(i).createTicket(stationId, timestamp);
		cout << "Created ticket for " << myAccounts.at(i).getName() << endl;
	}
	else {
		cout << "... contacting VRA" << endl;
		string vehicleDetails = "VRA response";
		myTempAccounts.push_back(TempAccount(vehicleDetails, stationId, timestamp));
		cout << "... created temporary account" << endl;
	}
}

bool TollRoadCollector::enterRegistrationDetails(string carRegistration){
		cout << "... contacting VRA" << endl;
		string vehicleDetails = "VRA response";
		if(vehicleDetails == "" ) return false;
		cout << "Please confirm details...Confirm" << endl;
		myAccounts.at(0).addCar(carRegistration);
		cout << "Registered new vehicle" << endl;
}

void TollRoadCollector::_test_displayTicketsForAccountId(int id){
	for(int i=0; i<myAccounts.size(); i++){
		if(myAccounts.at(i).getId() == id){ 
			myAccounts.at(i)._test_displayTickets();
			break;
		}
	}
}

void TollRoadCollector::_test_displayTempAccounts(){
	for(int i=0; i<myTempAccounts.size(); i++){
		myTempAccounts.at(i)._test_display();
	}
}