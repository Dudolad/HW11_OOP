#include "Friend.h"

Friend::Friend(string s, string a, string p, string bd)
{
	surname = s;
	address = a;
	phone = p;
	birthDate = bd;
}

void Friend::show() const
{
	cout << "=== Друг ===\n";
	cout << "Прізвище: " << surname << "\n";
	cout << "Адреса: " << address << "\n";
	cout << "Телефон: " << phone << "\n";
	cout << "Дата народження: " << birthDate << "\n";
}
