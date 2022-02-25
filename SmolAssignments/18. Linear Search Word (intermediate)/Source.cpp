#include<iostream>
#include<string>

using namespace std;

bool Compare(string& text, string& search, int index)
{
	int search_length = 0;
	for (char ch : search)
	{
		search_length++;
	}
	for (int i = 0; i < search_length; i++)
	{
		if (search[i] != text[index + i])
		{
			return false;
		}
	}
	return true;
}

void LinearSearchWord(string& text, string& search)
{
	int index = -1;
	int text_length = 0;
	
	for (char ch : text)
	{
		text_length++;
	}

	for (int i = 0; i < text_length; i++)
	{
		if (text[i] == search[0])
		{
			index = i;
			if (Compare(text, search,index) && (text[i + search.length()] == ' ' || text[i + search.length()] == 0))
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
	LinearSearchWord(text, search);
}