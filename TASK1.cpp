
#include "stdafx.h"
#include "SymbolFreq.h"
using namespace std;


int main()
{
	SymbolFreq* myObject = new SymbolFreq; //declaring and making object dynamic on one line.

	myObject->readFromFile();
	myObject->vecmapCreator();
	myObject->output();

	delete myObject;
    return 0;
}

