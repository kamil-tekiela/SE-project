#include "Payment.h"


Payment::Payment(void)
{
}
Payment::Payment(const int tollNumber)
{
	tollStart = tollNumber;
	timeStart = time(0);
}

