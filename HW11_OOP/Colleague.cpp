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
	cout << "=== Колега ===\n";
	cout << "Організація: " << organization << "\n";
	cout << "Адреса: " << address << "\n";
	cout << "Телефон: " << phone << "\n";
	cout << "Факс: " << fax << "\n";
	cout << "Контактна особа: " << contactPerson << "\n";
}
