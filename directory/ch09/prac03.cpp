#include<iostream>

struct chaff
{
	char dross[20];
	int slag;
};
const int bufsize = 80;
const int chasize = 2;
void setchaff(chaff* pa);
void showchaff(const chaff* pa);
int main()
{
	char buffer[bufsize];
	chaff* pa1 = new(buffer) chaff[chasize]; // use buffer array
	chaff* pa2 = new chaff[chasize]; //use heap
	for (int i = 0; i < chasize; i++)
	{
		setchaff(pa1 + i);
		setchaff(pa2 + i);
	}

	for (int i = 0; i < chasize; i++)
	{
		showchaff(pa1 + i);
		showchaff(pa2 + i);
	}
	delete[] pa2;
	return 0;
}

void setchaff(chaff* pa)
{
	using namespace std;
	cout << "Enter the dross: ";
	cin.get(pa->dross, 20);
	cin.get();
	cout << "Enter the slag: ";
	cin >> pa->slag;
	cin.get();
}

void showchaff(const chaff* pa)
{
	using namespace std;
	cout << "\nChaff Info\n";
	cout << "Dross: " << pa->dross << endl;
	cout << "Slag: " << pa->slag << endl;
}