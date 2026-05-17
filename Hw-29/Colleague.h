#pragma once
#include "Contact.h"
#include <string>

class Colleague : public Contact {
private:
    string organization;
    string address;
    string phone;
    string contactPerson;

public:
    Colleague(string org, string addr, string ph, string person);

    void show() const override;
};