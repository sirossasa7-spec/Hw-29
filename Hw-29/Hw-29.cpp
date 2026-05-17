#include <iostream>
#include <vector>
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

using namespace std;

int main() {
    vector<Contact*> contacts;

    int choice;

    do {
        cout << "\n1. Add Person";
        cout << "\n2. Add Colleague";
        cout << "\n3. Add Friend";
        cout << "\n4. Show all";
        cout << "\n0. Exit\n";
        cin >> choice;

        if (choice == 1) {
            string s, a, p;
            cout << "Surname Address Phone: ";
            cin >> s >> a >> p;
            contacts.push_back(new Person(s, a, p));
        }
        else if (choice == 2) {
            string org, addr, ph, person;
            cout << "Org Address Phone ContactPerson: ";
            cin >> org >> addr >> ph >> person;
            contacts.push_back(new Colleague(org, addr, ph, person));
        }
        else if (choice == 3) {
            string s, a, p, b;
            cout << "Surname Address Phone BirthDate: ";
            cin >> s >> a >> p >> b;
            contacts.push_back(new Friend(s, a, p, b));
        }
        else if (choice == 4) {
            for (auto c : contacts)
                c->show(); 
        }

    } while (choice != 0);

    for (auto c : contacts)
        delete c;

    return 0;
}
