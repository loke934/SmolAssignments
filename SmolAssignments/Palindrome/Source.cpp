#include <iostream>
#include <string>

using namespace std;

bool CheckIfPalindrome(string& word, int start, int end)
{
	if (end - start == 1 || start == end)
	{
		return true;
	}
	if (word[start] == word[end])
	{
		return CheckIfPalindrome(word, start + 1, end - 1);
	}
	return false;
}

int main()
{
	string word;
	cout << "Enter a word" << endl;
	getline(cin, word);
	if (CheckIfPalindrome(word, 0, word.length() - 1))
	{
		cout << "Is palindrome" << endl;
	}
	else
	{
		cout << "Not palindrome" << endl;
	}

}