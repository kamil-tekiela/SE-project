#include "main.h"

int main()
{
	TollRoadCollector* tollRoadCollector = new TollRoadCollector();
	
	do{
		cout << "Please enter car registrastion number...CW000000" << endl;
	}
	while(!tollRoadCollector->enterRegistrationDetails("CW000000"));
	
	cout << endl;
	tollRoadCollector->_test_displayVehiclesForAccountId(1);

	getchar();
}

