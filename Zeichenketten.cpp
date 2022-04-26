// Zeichenketten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	locale::global(locale("German_germany"));


	string myString = "alfatraining Bildungszentrum";

	cout << "Zeichenkette: " << myString << endl;

	myString = "Willkommen";
	myString += " im";
	myString += " CPP-Kurs.";


	cout << "Zeichenkette: " << myString << endl;

	myString = "alfatraining";
	myString.append(" Bildungszentrum");
	myString.append(", Karlsruhe");

	cout << "Zeichenkette: " << myString << endl;

	string Text = "viel vor und viel dahinter";

	typedef unsigned int uint32;
	typedef unsigned long long uint64;

	uint32 ui = 144;
	uint64 ul = 256;

	cout << "uint32: " << ui << endl;
	cout << "uint64: " << ul << endl;

	size_t position;
	string findText = "xxxx";

	position = Text.find(findText);

	cout << "Position: " << position << endl;
	cout << "string::npos: " << string::npos << endl;


	if (position == string::npos)
	{
		cerr << "Der Suchbegriff wurde nicht gefunden\n\n";
	}

	
	return EXIT_SUCCESS;
}
