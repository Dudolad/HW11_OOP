#pragma once
#include "Contact.h"
#include <vector>
using namespace std;

class ContactBook
{
protected:
	vector<Contact*> contacts;
public:
    void addContact(Contact* c);
    void showAll() const;
    void clear();
    bool empty() const;
    ~ContactBook();  
};

