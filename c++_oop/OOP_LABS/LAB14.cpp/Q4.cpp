#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> guests;

    char choice;
    do {
        string name;
        cout << "Enter guest name: ";
        cin >> name;

        guests.insert(name);

        cout << "Do you want to enter another guest? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Unique guest list in alphabetical order:" << endl;
    for ( auto i : guests) {
        cout << i << endl;
    }

    cout << "Total number of unique guests attending the party: " << guests.size() << endl;

    return 0;
}





