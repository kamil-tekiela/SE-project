#pragma once
class Ticket
{
public:
	Ticket(int entryGate, int entryTimestamp);
private:
	int entryGateId;
	int exitGateId;
	int timeDateEntry;
	int timeDateExit;
};

