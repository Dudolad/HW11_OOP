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
	cout << "=== ���� ===\n";
	cout << "�������: " << surname << "\n";
	cout << "������: " << address << "\n";
	cout << "�������: " << phone << "\n";
	cout << "���� ����������: " << birthDate << "\n";
}
