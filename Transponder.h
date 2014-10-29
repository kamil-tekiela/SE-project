#pragma once

class Transponder
{
public:
	Transponder(void);
	int getId();
private:
	static int idCounter;
	const int id;
};

