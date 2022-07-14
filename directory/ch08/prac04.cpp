#include<iostream>
using namespace std;
#include<cstring>

struct stringy
{
	char* str;  // points to a string
	int ct; // length of string (not counting '\0')
};

void show(const char* str, int n = 1);
void show(const stringy s, int n = 1);
void set(stringy& s, char* str);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what is used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	delete[] beany.str;
	return 0;
}

void show(const char* str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}

void show(const stringy s, int n)
{
	for (int i = 0; i < n; i++)
		cout << s.str << endl;
}

void set(stringy& s, char* str)
{
	s.ct = strlen(str);
	s.str = new char [s.ct + 1];
	for (int i = 0; i < s.ct; i++)
		s.str[i] = str[i];
	s.str[s.ct] = '\0';
}
