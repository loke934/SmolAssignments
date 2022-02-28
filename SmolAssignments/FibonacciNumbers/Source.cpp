#include<iostream>

using namespace std;

void fibonacci_recursion(int number,int a, int b)
{
	int result{0};

	if (number == 0)
	{
		return;
	}
	result = a + b;
	number--;
	cout << result << ",";
	fibonacci_recursion(number, result, a);
	cout << endl;
}

void fibonacci_iterative(int number)
{
	int a = 0;
	int b = 1;
	int result = a + b;
	for (int i = 0; i < number; i++)
	{
		cout << result << ",";
		result = a + b;
		a = b;
		b = result;
	}
	cout << endl;
}

int main()
{
	int number;
	cout << "Write a number:" << endl;
	cin >> number;
	fibonacci_recursion(number, 0, 1);
	fibonacci_iterative(number);
}