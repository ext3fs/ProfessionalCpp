#include <iostream>
#include <initializer_list>
using namespace std;

int main()
{

	int a = 1;
	int* b = &a;
	int** c = &b;

	cout << **c << endl;
	return 0;
}
