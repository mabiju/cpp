/* Write a C++ program to create student class and get a five subject marks,
    calculate and display total, percentage and grade using array.*/
#include <iostream>
using namespace std;

class student
{
private:
	int i, mark;
	int per, sum;
	char name[20];

public:
	void put_details();
	void show_details();
};

void student::put_details()
{
	cout << "Enter the name of student = ";
	cin >> name;
	for (i = 1; i <= 5; i++)
	{
		cout << "Enter the marks of subject " << i << " = ";
		cin >> mark;
		int total = 0;
		sum = total + mark;
	}
}
void student::show_details()
{
	cout << "This is name of student = " << name << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << "This is marks of student = " << mark << endl;
	}

	cout << "This is total of marks = " << sum << endl;
	per = sum / 5;
	cout << "Percentage = " << per << endl;
	if (per >= 60)
		cout << "A grade" << endl;
	else if (per >= 45)
		cout << "B grade" << endl;
	else
		cout << "C grade" << endl;
}

const int size = 5;
int main()
{
	student s1[size];
	for (int i = 1; i <= 5; i++)
	{
		cout << "This details about student " << i << endl;
		s1[i].put_details();
	}
	for (int i = 1; i <= 5; i++)
	{
		cout << "This is details about student marks = " << i << endl;
		s1[i].show_details();
	}
	return 0;
}
