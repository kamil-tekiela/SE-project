#pragma once
#include <string>
#include <iostream>
#include "Payment.h"
using namespace std;

class accountHolder
{
public:
	accountHolder(void);
	accountHolder(string name);
	void setName(string);
	int getId();
	void createPayment(int);
	void addCar(string regNo);
private:
	string name;
	static int idCounter;
	const int id;
	Payment payments[2];
};

