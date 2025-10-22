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

void ContactBook::editContact(int index, Contact* newContact)
{
	if (index >= 0 && index < contacts.size())
	{
		delete contacts[index];       
		contacts[index] = newContact; 
	}
	else
	{
		cout << "Невірний індекс для редагування!\n";
	}
}

vector<Contact*> ContactBook::searchBySurname(const string& surname) const
{
	vector<Contact*> result;
	for (auto c : contacts)
	{
		if (c->getSurname() == surname)
			result.push_back(c);
	}
	return result;
}
