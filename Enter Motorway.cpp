#include "main.h"

int main()
{
	TollRoadCollector* tollRoadCollector = new TollRoadCollector();

	time_t timestamp = time(0);
	
	
	//for debugging purposes we are fakin user interaction
	tollRoadCollector->vehicleDetected(1, "D12000", timestamp, 1);
	cout << endl;
	tollRoadCollector->_test_displayTicketsForAccountId(1);
	cout << endl;

	tollRoadCollector->vehicleDetected(0, "KE00000", timestamp+100, 1);
	cout << endl;
	tollRoadCollector->_test_displayTicketsForAccountId(1);
	cout << endl;

	tollRoadCollector->vehicleDetected(0, "WW111000", timestamp-100, 1);
	cout << endl;
	tollRoadCollector->_test_displayTempAccounts();
	cout << endl;


	getchar();
}

