#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string s, string a, string p)
{
	surname = s;
	address = a;
	phone = p;
}

void Person::show() const
{
	cout << "=== ������� ===\n";
	cout << "�������: " << surname << "\n";
	cout << "������: " << address << "\n";
	cout << "�������: " << phone << "\n";
}
