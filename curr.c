#include <iostream>
#include <initializer_list>
using namespace std;

int makeSum(initializer_list<int> lst)
{
	int sum = 0;

	for(int val : lst)
		sum += val;
	return sum;
}

int main()
{
	cout << makeSum({1,2,3}) << '\n';
	return 0;
}
