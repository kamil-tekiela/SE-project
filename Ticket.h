#pragma once
class Ticket
{
public:
	Ticket(int entryGate, int entryTimestamp);
	int getentryGateId();
	int getexitGateId();
	int gettimeDateEntry();
	int gettimeDateExit();
	int getId();
private:
	static int idCounter;
	const int id;
	int entryGateId;
	int exitGateId;
	int timeDateEntry;
	int timeDateExit;
};

