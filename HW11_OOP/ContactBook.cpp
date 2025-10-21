#include "ContactBook.h"
#include <iostream>
using namespace std;

void ContactBook::addContact(Contact* c)
{
	contacts.push_back(c);
}

void ContactBook::showAll() const
{
	for (const auto& c : contacts)
	{
		c->show();
	}
}

void ContactBook::clear() {
	for (auto c : contacts)
		delete c;  
	contacts.clear();
}

bool ContactBook::empty() const {
	return contacts.empty();
}

ContactBook::~ContactBook()
{
	clear();
}
