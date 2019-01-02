#include "Morse.h"

int main()
{
	string thing1;
	cout << "Enter a phrase:\n";
	getline(cin, thing1);
	string thing2 = convertString(thing1);
	string thing3 = convertCode(thing2);
	string thing4 = convertString(thing3);

	cout << thing1 << endl;
	cout << thing2 << endl;
	cout << thing3 << endl;
	cout << thing4 << endl;	
	return 0;
}
