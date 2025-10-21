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
	cout << "=== Персона ===\n";
	cout << "Прізвище: " << surname << "\n";
	cout << "Адреса: " << address << "\n";
	cout << "Телефон: " << phone << "\n";
}
