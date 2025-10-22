#pragma once
#include "Contact.h"
#include <vector>
#include <string>
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

    void editContact(int index, Contact* newContact);       
    vector<Contact*> searchBySurname(const string& surname) const;  
};
