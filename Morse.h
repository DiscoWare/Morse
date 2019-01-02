#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char getLetter(const string& input)
{
	char result;
	if (input == ".-")
		result = 'A';
	else if (input == "-...")
		result = 'B';
	else if (input == "-.-.")
		result = 'C';
	else if (input == "-..")
		result = 'D';
	else if (input == ".")
		result = 'E';
	else if (input == "..-.")
		result = 'F';
	else if (input == "--.")
		result = 'G';
	else if (input == "....")
		result = 'H';
	else if (input == "..")
		result = 'I';
	else if (input == ".---")
		result = 'J';
	else if (input == "-.-")
		result = 'K';
	else if (input == ".-..")
		result = 'L';
	else if (input == "--")
		result = 'M';
	else if (input == "-.")
		result = 'N';
	else if (input == "---")
		result = 'O';
	else if (input == ".--.")
		result = 'P';
	else if (input == "--.-")
		result = 'Q';
	else if (input == ".-.")
		result = 'R';
	else if (input == "...")
		result = 'S';
	else if (input == "-")
		result = 'T';
	else if (input == "..-")
		result = 'U';
	else if (input == "...-")
		result = 'V';
	else if (input == ".--")
		result = 'W';
	else if (input == "-..-")
		result = 'X';
	else if (input == "-.--")
		result = 'Y';
	else if (input == "--..")
		result = 'Z';
	else if (input == "/")
		result = ' ';
	else if (input == ".-.-.-")
		result = '.';

	else
		throw invalid_argument("INVALID STRING: \"" + input + "\"");

	return result;
}

string getCode(const char& input)
{
	string result;
	if (input == 'A')
		result = ".-";
	else if (input == 'B')
		result = "-...";
	else if (input == 'C')
		result = "-.-.";
	else if (input == 'D')
		result = "-..";
	else if (input == 'E')
		result = ".";
	else if (input == 'F')
		result = "..-.";
	else if (input == 'G')
		result = "--.";
	else if (input == 'H')
		result = "....";
	else if (input == 'I')
		result = "..";
	else if (input == 'J')
		result = ".---";
	else if (input == 'K')
		result = "-.-";
	else if (input == 'L')
		result = ".-..";
	else if (input == 'M')
		result = "--";
	else if (input == 'N')
		result = "-.";
	else if (input == 'O')
		result = "---";
	else if (input == 'P')
		result = ".--.";
	else if (input == 'Q')
		result = "--.-";
	else if (input == 'R')
		result = ".-.";
	else if (input == 'S')
		result = "...";
	else if (input == 'T')
		result = "-";
	else if (input == 'U')
		result = "..-";
	else if (input == 'V')
		result = "...-";
	else if (input == 'W')
		result = ".--";
	else if (input == 'X')
		result = "-..-";
	else if (input == 'Y')
		result = "-.--";
	else if (input == 'Z')
		result = "--..";
	else if (input == ' ')
		result = "/";
	else if (input == '.')
		result = ".-.-.-";
	else 
		throw invalid_argument("INVALID CHAR: \"" + to_string(input) + "\"");

	return result;
}

string convertCode(string& input)
{
	string result;
	string current;

	// TODO: clear trailing empty space

	for (unsigned i = 0; i < input.length(); ++i)
	{
		char currentChar = input[i];
		if (currentChar == ' ' || i == input.length() - 1)
		{
			if (i == input.length() - 1)
				current += currentChar;
			result += getLetter(current);
			current = "";
		}
		else
		{
			current += currentChar;
		}
	}
	
	return result;
}

string convertString(const string& input)
{
	string result;
	char current;
	for (int i = 0; i < input.size(); ++i)
	{
		result += getCode(input[i]);
		if (i != input.size() - 1)
			result += " ";
	}

	return result;
}
