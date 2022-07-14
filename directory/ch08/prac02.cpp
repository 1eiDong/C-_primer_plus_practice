#include<iostream>
using namespace std;


struct CandyBar
{
	char maker[40];
	double weight;
	int calorie;
};

int main()
{
	void SetCandy(CandyBar & candy, char* maker = "Millennium Munch", double weight = 2.85, int calorie = 350);
	void ShowCandy(const CandyBar & candy);
	CandyBar candy;
	char brand[40];
	double weight;
	int calo;
	cout << "Enter the candy maker: ";
	cin.get(brand, 40);
	cout << "Enter the candy weight: ";
	cin >> weight;
	cout << "Enter the candy calorie(integer): ";
	cin >> calo;
	
	cout << "\nDefault setting:\n";
	SetCandy(candy);
	ShowCandy(candy);
	cout << "\nMake a different:\n";
	SetCandy(candy, brand);
	ShowCandy(candy);
	cout << "\nA refresh one:\n";
	SetCandy(candy, brand, weight, calo);
	ShowCandy(candy);

	return 0;
}

void ShowCandy(const CandyBar& candy)
{
	cout << "\nCandyBar Info\n";
	cout << "Maker: " << candy.maker << endl;
	cout << "Weight: " << candy.weight << endl;
	cout << "Calorie: " << candy.calorie << endl;
}

void SetCandy(CandyBar& candy, char* maker, double weight, int calorie)
{
	strcpy_s(candy.maker, maker);
	candy.weight = weight;
	candy.calorie = calorie;
}