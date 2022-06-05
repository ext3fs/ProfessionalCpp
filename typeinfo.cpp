#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

class Temp{
	double a;
};

class A{
	int a;
};
int main()
{
	A a;
	cout << typeid(a).name() << endl;

	vector<Temp> v(3);

	for(const auto& ele : v)
		cout << typeid(ele).name() << endl;

	return 0;
}
