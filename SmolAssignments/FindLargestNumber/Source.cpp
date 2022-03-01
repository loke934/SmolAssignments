#include<iostream>

using namespace std;

template<typename T>
void find_largest_number(T a, T b)
{
	if (a == b)
	{
		cout << "Same number" << endl;
	}
	else if (a > b)
	{
		cout << "Value A: " << a << " is higher than value B: " << b << endl;
	}
	else
	{
		cout << "Value B: " << b << " is higher than value A: " << a << endl;
	}
	
}

int main()
{
	int a;
	int b;
	cout << "Input two numbers:" << endl;
	cin >> a >> b;
	find_largest_number<int>(a, b);
	
}