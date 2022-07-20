// using a static local variable
#include<iostream>
#include<string>

// function prototype
void strcount(const std::string str);

int main()
{
	using namespace std;
	string input;
	char next;

	cout << "Enter a line:\n";
	getline(cin, input);
	// the design of empty line to quit!
	while (input != "")
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit): \n";
		getline(cin, input);
	}
	cout << "\nBye!\n";
	return 0;
}

void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	int i = 0;

	cout << "\"" << str << "\" contains ";
	while (str[i])
	{
		if (str[i] == ' ')
			count;
		else
			count++;
		i++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
