#include "Friend.h"

Friend::Friend(string s, string a, string p, string b) {
    surname = s;
    address = a;
    phone = p;
    birthDate = b;
}

void Friend::show() const {
    cout << "\n[Friend]\n";
    cout << "Surname: " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Birth date: " << birthDate << endl;
}