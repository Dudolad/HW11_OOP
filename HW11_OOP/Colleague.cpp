#include "Colleague.h"

Colleague::Colleague(string org, string addr, string ph, string fx, string cp)
{
	organization = org;
	address = addr;
	phone = ph;
	fax = fx;
	contactPerson = cp;
}

void Colleague::show() const
{
	cout << "=== ������ ===\n";
	cout << "����������: " << organization << "\n";
	cout << "������: " << address << "\n";
	cout << "�������: " << phone << "\n";
	cout << "����: " << fax << "\n";
	cout << "��������� �����: " << contactPerson << "\n";
}
