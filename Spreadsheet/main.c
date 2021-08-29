#include <iostream>
#include "Spreadsheet.h"
using namespace std;

class SpreadsheetApplication {};

int main()
{
	SpreadsheetApplication app;
	cout << "Spreadsheet Application create!!" << endl;

	Spreadsheet sh1(app);
	Spreadsheet sh2(app, 3, 4);
	Spreadsheet sh3(sh2);
	sh1 = sh3;

	cout << "Spreadsheet Application end!!" << endl;
	return 0;	
}
