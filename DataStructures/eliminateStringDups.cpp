/*
A program to remove duplicate characters in a string
*/

#include<string>
#include<iostream>
#include<vector>

using namespace std;


int main()
{
	string stringWithDuplicates = "subbu";
	vector<bool> hashOfCharacters;
	for (size_t i = 0; i < 26; i++)
	{
		hashOfCharacters.push_back(false);
	}

	for (int i = 0; i < stringWithDuplicates.length(); i++)
	{
		int charInAscii = stringWithDuplicates[i];
		charInAscii -= 97;
		if (hashOfCharacters[charInAscii] == false)
		{
			hashOfCharacters[charInAscii] = true;
		}
		else
		{
			for (int j = i + 1; j< stringWithDuplicates.length() - 1; j++)
			{
				stringWithDuplicates[j] = stringWithDuplicates[j + 1];
			}
		}
	}

  cout << stringWithDuplicates << endl;
}
