#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	void SetUpper(string & str);
	
	string str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin, str))
	{
		if (str == "q" || str == "Q")
			break;
		else
		{
			SetUpper(str);
			cout << str << endl;
			cout << "\nNext string (q to quit): ";
		}
	}
	cout << "\nBye.\n";
	return 0;
}

void SetUpper(string& str)
{
	for (int i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		else
			str[i] = toupper(str[i]);
	}
}