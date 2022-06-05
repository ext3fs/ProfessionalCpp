#include <iostream>
//#include <cstring>
using namespace std;

struct t{
	char name[30];
};


int main()
{
	t a = "abcedfg";

	t b;

	b = a;
	cout << b.name << endl;
	return 0;
}
