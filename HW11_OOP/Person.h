#pragma once
#include "Contact.h"
#include <string>
using namespace std;

class Person :
    public Contact
{
protected:
    string surname;
    string address;
    string phone;
public:
    Person(string s, string a, string p);
    void show() const override;
};

