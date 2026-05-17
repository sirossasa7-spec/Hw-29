#include "Person.h"

Person::Person(string s, string a, string p) {
    surname = s;
    address = a;
    phone = p;
}

void Person::show() const {
    cout << "\n[Person]\n";
    cout << "Surname: " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
}