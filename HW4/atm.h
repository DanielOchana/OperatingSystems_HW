//atm.h

#ifndef _ATM_H
#define _ATM_H
#define NO_ID -1
#define FIELDS_NUM 5

#include <string>
#include <fstream>
#include <vector>

#include "bankClass.h"

using std::string;
using std::ifstream;

//extern void writeToLogFile(int ATMid = 0, bool error = 0, bool minus = 0, Command command = NULL, int Balance = 0, bool commissions = 0, int presentage = 0);

class ATM
{
private:
	ifstream input;
	int id;

public:
	
	ATM(ifstream inputFile, int id);
	~ATM(); //FIXME gal - close file here

	int getID();
	void handleAction(Command command, Bank bank);
};


#endif