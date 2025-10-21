#pragma once
#include "Contact.h"
#include <string>
using namespace std; 

class Friend :
    public Contact
{
protected:
    string surname;
    string address;
    string phone;
    string birthDate;
public:
    Friend(string s, string a, string p, string bd);
    void show() const override;
};

