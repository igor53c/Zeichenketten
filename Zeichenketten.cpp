// Zeichenketten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

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
	string findText = "viel";

	position = Text.find(findText);

	cout << "Position: " << position << endl;
	cout << "string::npos: " << string::npos << endl;

	if (position == string::npos)
	{
		cerr << "Der Suchbegriff wurde nicht gefunden\n\n";
	}

	// oder
	if (position == -1)
	{
		cerr << "Der Suchbegriff wurde nicht gefunden\n\n";
	}

	findText = "viel";

	position = Text.find(findText);

	cout << "Text: " << Text << endl;

	cout << "Position 1: " << position << endl;

	position = Text.find(findText, position + 1);

	cout << "Position 2: " << position << endl;

	position = Text.find(findText, position + 1);

	cout << "Position 3: " << position << endl;

	cout << "Text: " << Text << endl;

	position = Text.find(findText);

	string ersatz = "nix";

	Text.replace(position, ersatz.length(), ersatz);

	cout << "Text: " << Text << endl;

	Text.erase(3, 1);

	cout << "Text: " << Text << endl;

	for (int i = 0; i < Text.length(); i++)
	{
		cout << Text.at(i);
	}

	cout << endl;

	int i = 0;

	while (Text[i])
	{
		cout << Text[i++];
	}

	cout << endl;

	position = Text.find("dahinter");

	Text.insert(position, "mehr");

	cout << "Text: " << Text << endl;

	string teilText = Text.substr(8, 8);

	cout << teilText << endl;

	teilText = Text.substr(8);

	cout << teilText << endl;

	string s = "alfatraining Bildungszentrum, 76133 Karlsruhe";

	cout << s << endl;

	for (int i = 0; i < s.length() ; i++)
	{
		if(s.at(i) >= 'a' && s.at(i) <= 'z')
			s.at(i) = s.at(i) - 32;
	}

	cout << s << endl;

	for (int i = 0; i < s.length() ; i++)
	{
		s.at(i) = tolower(s.at(i));
	}

	cout << s << endl;

	string s1 = "abc";

	string s2 = "ac";

	if (s1 > s2)
		cout << "'" << s1 << "' > '" << s2 << "'" << endl;
	else
		cout << "'" << s1 << "' <= '" << s2 << "'" << endl;

	if(s1.compare(s2) < 0)
		cout << "'" << s1 << "' < '" << s2 << "'" << endl;
	else if (s1.compare(s2) > 0)
		cout << "'" << s1 << "' > '" << s2 << "'" << endl;
	else
		cout << "'" << s1 << "' = '" << s2 << "'" << endl;

	s1 = "alfatraining";
	s2 = s1;

	cout << "s1: " << s1 << ", Adresse von s1: " << &s1 << endl;
	cout << "s2: " << s2 << ", Adresse von s2: " << &s2 << endl;

	string s3 = string(s1);

	cout << "s1: " << s1 << ", Adresse von s1: " << &s1 << endl;
	cout << "s3: " << s3 << ", Adresse von s3: " << &s3 << endl;

	s1 = "123";

	istringstream is1(s1);

	is1 >> i;

	if (is1.fail())
	{
		cerr << "Fehler" << endl;
	}
	else
	{
		cout << i << endl;
	}

	s1 = "alfa";

	istringstream is2(s1);

	is2 >> i;

	if (is2.fail())
	{
		cerr << "Fehler" << endl;
	}
	else
	{
		cout << i << endl;
	}

	s1 = "12345";

	try
	{
		i = stoi(s1);

		cout << i << endl;
	}
	catch (exception ex)
	{
		cerr << "Fehler: " << ex.what() << endl;
	}

	i = 42;

	s1 = to_string(i);

	cout << s1 << endl;

	return EXIT_SUCCESS;
}
