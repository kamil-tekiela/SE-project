#include "Ticket.h"

int Ticket::idCounter = 0;

Ticket::Ticket(int entryGate, int entryTimestamp) : id(++idCounter)
{
	entryGateId = entryGate;
	timeDateEntry = entryTimestamp;
	exitGateId = -1;
	timeDateExit = -1;
}

int Ticket::getId(){return id;}

int Ticket::getentryGateId(){ return entryGateId;}
int Ticket::getexitGateId(){ return exitGateId;}
int Ticket::gettimeDateEntry(){ return timeDateEntry;}
int Ticket::gettimeDateExit(){ return timeDateExit;}
