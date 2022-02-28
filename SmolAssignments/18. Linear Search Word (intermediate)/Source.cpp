#include<iostream>
#include<string>

using namespace std;

bool compare(const string& text, const string& search, const int index, const int length)
{
	for (int i = 0; i < length; i++)
	{
		if (search[i] != text[index + i])
		{
			return false;
		}
	}
	return true;
}

int get_length(const string& text)
{
	int text_length = 0;

	for (char ch : text)
	{
		text_length++;
	}

	return text_length;
}

void linear_search_word(string& text, string& search)
{
	int index = -1;
	const int text_length = get_length(text);
	const int search_length = get_length(search);

	for (int i = 0; i < text_length; i++)
	{
		if (text[i] == search[0])
		{
			index = i;
			if (compare(text, search, index, search_length) && (text[i + search_length] == ' ' || text[i + search_length] == 0))
			{
				cout << "Contains word: " << search << endl;
				return;
			}
		}
		for (;i < text_length; i++)
		{
			if (text[i] == ' ')
			{
				break;
			}
		}
	}
	cout << "Does not contain word " << search << endl;
}

int main()
{
	string text;
	string search;
	cout << "Write a sentence" << endl;
	getline(cin, text);
	cout << "What word to search for?" << endl;
	getline(cin, search);
	linear_search_word(text, search);
}