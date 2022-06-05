#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
	int i;
	
	explicit A(int i) : i(i){
		cout << "default constructor" << endl;
	}

	virtual ~A(){
		cout << "destructor" << endl;
	}

	A(const A& src) : i(src.i){
		cout << "copy constructor" << endl;
	}

	A& operator=(const A& src){
		cout << "copy =" << endl;
		i = src.i;
		return *this;		
	}

	A(A&& src){
		cout << "move construct" << endl;
		i = src.i;
	}

	A& operator=(const A&& src){
		cout << "move =" << endl;
		i = src.i;
		return *this;		
	}
};

A fn(A& a)
{
	cout << a.i << endl;
	A tmp(1);

	return tmp; 
}

int main()
{
	A a(2);
	
	a = fn(a);
	return 0;
}
