#include <iostream>
#include <string>

using namespace std;

void PrintInReverse(string& str)
{
	int length{};
	for (char ch : str)
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	cout << "Write a word: " << endl;
	string input;
	getline(cin, input);
	PrintInReverse(input);
}


