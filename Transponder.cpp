#include "Transponder.h"

int Transponder::idCounter = 0;

Transponder::Transponder(void) : id(++idCounter)
{

}

int Transponder::getId(){
	return id;
}