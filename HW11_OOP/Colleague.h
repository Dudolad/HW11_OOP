#pragma once
#include "Contact.h"
#include <string>
using namespace std;

class Colleague :
    public Contact
{
protected:
    string organization;
    string address;
    string phone;
    string fax;
    string contactPerson;
public:
    Colleague(string org, string addr, string ph, string fx, string cp);
    void show() const override;
};

