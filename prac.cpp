#include<iostream>
#include<cctype>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

void prac_6_1();
void prac_6_2();
void prac_6_3();
void prac_6_4();
void prac_6_5();
void prac_6_6();
void prac_6_7();
void prac_6_8();
void prac_6_9();

int main()
{
	//prac_6_1();
	//prac_6_2();
	//prac_6_3();
	//prac_6_4();
	//prac_6_5();
	//prac_6_6();
	//prac_6_7();//the most difficult one.
	//prac_6_8();
	//prac_6_9();

	return 0;
}

void prac_6_1()
{
	char ch;
	cout << "This program transfers letter into uppercase or lowercase.\n";
	cout << "Enter @ to terminate the process.\n";
	cout << "Now you may enter words: ";
	while ((ch = cin.get()) != '@')
	{
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		else if (ch >= 'A' && ch <= 'Z')
			ch += 32;
		else if (ch == ' ')
			ch = ch;
		else
			continue;
		cout << ch;
	}

}
void prac_6_2()
{
	const int Max = 10;
	double donation[Max];
	double tmp;
	cout << "You may Enter the number of donations up to " 
		 << Max << " times.\n";
	int i = 0;
	double sum = 0.0;
	cout << "Enter #1 donation: ";
	while ((cin >> tmp) && i < Max)
	{
		cout << "Enter #" << i + 2 << " donation: ";
		donation[i] = tmp;
		sum += donation[i];
		++i;
	}
	if (i == 0)
		cout << "No donation data.\n";
	else
	{
		int count = 0;
		for (int j = 0; j <= i; ++j)
		{
			if (donation[j] > sum / i)
				++count;
		}
		cout << sum / i << " is the average of this donation.\n";
		cout << "And there are " << count << " people donate more than average.\n";
	}
	cout << "Done.\n";
}
void prac_6_3()
{
	char code;
	cout << "Please enter one of the following choices.\n";
	cout << "c) carnivore                p) pianist\n";
	cout << "t) tree                     g) game\n";
	cin >> code;

	while (code != 'c' && code != 'p' && code != 't' && code != 'g')
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> code;
	}

	switch (code)
	{
		case 'c': cout << "A tiger is a carnivore.\n"; break;
		case 'p': cout << "Van Gogh is a pianist.\n"; break;
		case 't': cout << "A maple is a tree.\n"; break;
		case 'g': cout << "Disco Elysium is a game.\n"; break;
	}
}
void prac_6_4()
{
	const int strsize = 80;
	const int listsize = 4;
	struct bop
	{
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference; // 0 = fullname, 1 = title, 2 = bopname
	};
	// initialize the list
	bop list[listsize] =
	{
		{"Li Chunming", "Fellow", "The wise", 2},
		{"Lei Yidong", "Rookie1", "Student", 1},
		{"Yang Jin", "Future Fellow", "Appentice", 0},
		{"Wu Nan", "Rookie2", "QZ", 1}
	};
	cout << "Benevolent Order of Programmers Report\n";
	cout << "a. display by name       b. display by title\n";
	cout << "c. display by bopname    d. display by preference\n";
	cout << "q. quit\n";
	cout << "Enter your choice:";
	char ch;
	cin >> ch;
	int tmp;
	while (ch != 'q')
	{
		switch (ch)
		{
		case'a': for (int i = 0; i < listsize; ++i)
			cout << list[i].fullname << endl; break;
		case'b': for (int i = 0; i < listsize; ++i)
			cout << list[i].title << endl; break;
		case'c': for (int i = 0; i < listsize; ++i)
			cout << list[i].bopname << endl; break;
		case'd': for (int i = 0; i < listsize; ++i)
		{
			tmp = list[i].preference;
			if (tmp == 0)
				cout << list[i].fullname << endl;
			else if (tmp == 1)
				cout << list[i].title << endl;
			else
				cout << list[i].bopname << endl;
		}
			break;
		default: cout << "That's not a choice!\n";
		}
		cout << "Next choice: ";
		cin >> ch;
	}
	cout << "Bye!\n";

}
void prac_6_5()
{
	const double Tax_rate_1 = 0.1;
	const double Tax_rate_2 = 0.15;
	const double Tax_rate_3 = 0.2;
	double tvarps;
	double tax = 0.0;
	cout << "This is a revenue tax calculator.\n";
	cout << "Enter q to terminate.\n";
	cout << "Enter your revenue: ";
	while ((cin >> tvarps) && (tvarps > 0))
	{
		if (tvarps <= 5000)
			tax = 0;
		else if (tvarps <= 15000)
			tax = (tvarps - 5000.0) * Tax_rate_1;
		else if (tvarps <= 35000)
		{
			tax = (15000.0 - 5000.0) * Tax_rate_1;
			tax += ((tvarps - 15000.0) * Tax_rate_2);
		}
		else
		{
			tax = (15000.0 - 5000.0) * Tax_rate_1;
			tax += ((35000.0 - 15000.0) * Tax_rate_2);
			tax += ((tvarps - 35000.0) * Tax_rate_3);
		}

		cout << "Your revenue is " << tvarps << " tvarps.\n";
		cout << "And you need to pay a tax " << tax << " tvarps.\n";
		cout << "Enter another revenue:";
 	}
	cout << "Done.\n";
}
void prac_6_6()
{
	struct donator
	{
		char fullname[80];
		double donation;
	};
	cout << "---Legal Rights Institute---\n";
	cout << "Make sure input integers, or program will terminate.\n";
	cout << "The number of donators: ";
	int num = 0;
	while (cin >> num && num > 0)
	{
		cin.get();
		donator* pa = new donator[num];
		for (int i = 0; i < num; ++i)
			{
				cout << "#" << i + 1 << " donator\n";
				cout << "Name: ";
				cin.getline(pa[i].fullname, 80);
				cout << "Donation: ";
				cin >> pa[i].donation;
				cin.get();
			}

		cout << "Grand Patrons:\n";
		int flag_g = 0;
		int flag = 0;
		for (int i = 0; i < num; ++i)
			{
				if (pa[i].donation > 10000)
				{
					cout << "Name: " << pa[i].fullname << "\t\t"
						<< "Donation:" << pa[i].donation << endl;
					++flag_g;
				}
			}
		if (flag_g == 0)
			cout << "None.\n";
		cout << endl;
		cout << endl;
		cout << endl;

		cout << "Patrons:\n";
		for (int i = 0; i < num; ++i)
			{
				if (pa[i].donation <= 10000)
				{
					cout << "Name: " << pa[i].fullname << "\t\t"
						<< "Donation:" << pa[i].donation << endl;
					++flag;
				}
			}
		if (flag == 0)
			cout << "None.\n";
		delete[] pa;
	}
	cout << "Done.\n";
}
void prac_6_7()
{
	// a little difficult
	cout << "Enter words (q to quit):\n";
	string textline;
	int vowels = 0;
	int consonants = 0;
	int others = 0;
	cin >> textline; // CAUTION! DO NOT USE getline operator: '\n' and ' ' will not suspend textline
	while (textline != "q")
	{
		if (isalpha(textline[0]))
		{
			switch (textline[0])
			{
			case'a':
			case'e':
			case'i':
			case'o':
			case'u': ++vowels; break;
			default: ++consonants;
			}
		}
		else
			++others;
		cin >> textline;
	}
	cout << vowels << " words begin with vowels.\n";
	cout << consonants << " words begin with consonants.\n";
	cout << others << " others.\n";
}
void prac_6_8()
{
	const int Size = 60;
	char filename[Size];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, Size);
	inFile.open(filename);
	if (!(inFile.is_open())) //fail to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	int count = 0;

	while (inFile >> ch)
	{
		++count;
	}

	if (count == 0)
		cout << "No data processed.\n";
	else
		cout << count << " characters read.\n";
	inFile.close();
	cout << "Done.\n";
}
void prac_6_9()
{
	struct donator
	{
		char fullname[80];
		double donation;
	};
	const int Size = 60;
	char filename[Size];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, Size);
	inFile.open(filename);
	if (!(inFile.is_open())) //fail to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int num = 0;
	while (inFile >> num && num > 0)
	{
		inFile.get();
		donator* pa = new donator[num];
		for (int i = 0; i < num; ++i)
		{
			inFile.getline(pa[i].fullname, 80);
			inFile >> pa[i].donation;
			inFile.get();
		}

		cout << "Grand Patrons:\n";
		int flag_g = 0;
		int flag = 0;
		for (int i = 0; i < num; ++i)
		{
			if (pa[i].donation > 10000)
			{
				cout << "Name: " << pa[i].fullname << "\t\t\t"
					<< "Donation:" << pa[i].donation << endl;
				++flag_g;
			}
		}
		if (flag_g == 0)
			cout << "None.\n";
		cout << endl;
		cout << endl;
		cout << endl;

		cout << "Patrons:\n";
		for (int i = 0; i < num; ++i)
		{
			if (pa[i].donation <= 10000)
			{
				cout << "Name: " << pa[i].fullname << "\t\t\t"
					<< "Donation:" << pa[i].donation << endl;
				++flag;
			}
		}
		if (flag == 0)
			cout << "None.\n";
		delete[] pa;
	}
	cout << "Done.\n";
}