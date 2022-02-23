#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "Constructor: A" << endl;
	}
	~A()
	{
		cout << "Destructor: A" << endl;
	}
};

class B : A
{
public:
	B()
	{
		cout << "Constructor: B" << endl;
	}
	~B()
	{
		cout << "Destructor: B" << endl;
	}

};

class C : B
{
public:
	C()
	{
		cout << "Constructor: C" << endl;
	}
	~C()
	{
		cout << "Destructor: C" << endl;
	}
};


int main()
{
	C obj;
	/*When instantiated the constructors get called from base to the last derived one and
	 *reverse with the destructors when they go out of scope.
	 *Since the base must be created first for the derived ones to be able to inherit from base.
	 */
}