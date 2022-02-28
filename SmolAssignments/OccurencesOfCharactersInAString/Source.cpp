#include <iostream>
#include<string>
#include <unordered_map>

using namespace std;

void occurrences(string& text)
{
	unordered_map<char, int> letter_map;

	for (char ch: text)
	{
		ch = (char)toupper(ch);

		if (letter_map.count(ch) > 0)
		{
			letter_map[ch] = letter_map[ch] + 1;
		}
		else
		{
			letter_map.insert(pair<char, int>(ch, 1));
		}
	}

	unordered_map<char, int> ::iterator it;
	for (it = letter_map.begin(); it != letter_map.end(); ++it)
	{
		cout <<" " << it->first << ": " << it->second << endl;
	}
}

int main()
{
	cout << "Write a word:" << endl;
	string text;
	cin >> text;
	occurrences(text);
}