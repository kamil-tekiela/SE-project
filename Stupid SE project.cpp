#include "main.h"

int main()
{
	TollRoadCollector* tollRoadCollector = new TollRoadCollector();
	
	tollRoadCollector->vehicleDetected(1, "000", 1, 1);
	cout << endl;
	tollRoadCollector->vehicleDetected(0, "KE00000", 1, 1);
	cout << endl;
	tollRoadCollector->vehicleDetected(10, "000", 1, 1);
	cout << endl;

	getchar();
}

