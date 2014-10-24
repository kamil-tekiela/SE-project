#include "accountHolder.h"

int accountHolder::idCounter = 0;
accountHolder::accountHolder() : id(++idCounter)
{
}
accountHolder::accountHolder(string name) : id(++idCounter)
{
	this->name = name;
}

void accountHolder::setName(std::string name)
{
	this->name = name;
}

void accountHolder::createPayment(int tollNumber){
	cout << "Creating payment for: " << name <<  endl;
	payments[0] = Payment(tollNumber);
}

int accountHolder::getId(){
	return id;
}