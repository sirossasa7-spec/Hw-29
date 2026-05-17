#pragma once
#include "Contact.h"
#include <string>

class Friend : public Contact {
private:
    string surname;
    string address;
    string phone;
    string birthDate;

public:
    Friend(string s, string a, string p, string b);

    void show() const override;
};