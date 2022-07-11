#include<iostream>

using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int main()
{
	int getinfo(student pa[], int n);
	void display1(student st);
	void display2(const student * ps);
	void display3(const student pa[], int n);

	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done.\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int count = 0;
	for (count = 0; count < n; ++count)
	{
		cout << "Enter student's name: ";
		cin.getline(pa[count].fullname, SLEN);
		if (pa[count].fullname == " ")
			break;
		else
		{
			cout << "Enter student's hobby: ";
			cin.getline(pa[count].hobby, SLEN);
			cout << "Enter student's ooplevel: ";
			cin >> pa[count].ooplevel;
			cin.get();
			cin.get();
		}
	}
	if (count == 0)
		cout << "\nNo Data Restored\n";
	else
		cout << "\nData Restored\n";

	return count;
}

void display1(student st)
{
	cout << "\nStudent Info\n";
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps)
{
	cout << "\nStudent Info\n";
	cout << "Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nStudent Info #" << i+1 << endl;
		cout << "Name: " << (pa + i)->fullname << endl;
		cout << "Hobby: " << (pa + i)->hobby << endl;
		cout << "Ooplevel: " << (pa + i)->ooplevel << endl;
		//OR
		//cout << "Name: " << pa[i].fullname << endl;
		//cout << "Hobby: " << pa[i].hobby << endl;
		//cout << "Ooplevel: " << pa[i].ooplevel << endl;
	}
}