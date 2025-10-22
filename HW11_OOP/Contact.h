#pragma once
#include <iostream>
using namespace std;

class Contact
{
public:
	virtual void show() const = 0;
	virtual ~Contact() {}; 
};

