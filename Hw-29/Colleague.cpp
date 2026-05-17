#include "Colleague.h"

Colleague::Colleague(string org, string addr, string ph, string person) {
    organization = org;
    address = addr;
    phone = ph;
    contactPerson = person;
}

void Colleague::show() const {
    cout << "\n[Colleague]\n";
    cout << "Organization: " << organization << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Contact person: " << contactPerson << endl;
}