#include <iostream>
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"
#include "ContactBook.h"
using namespace std;

int main() {
    ContactBook book;
    int choice;

    do {
        cout << "\n--- Телефонний довідник ---\n";
        cout << "1. Додати Персону\n";
        cout << "2. Додати Колегу\n";
        cout << "3. Додати Друга\n";
        cout << "4. Показати всі контакти\n";
        cout << "5. Очистити довідник\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        if (choice == 1) {
            string s, a, p;
            cout << "Прізвище: "; cin >> s;
            cout << "Адреса: "; cin >> a;
            cout << "Телефон: "; cin >> p;
            book.addContact(new Person(s, a, p));
        }
        else if (choice == 2) {
            string org, addr, ph, fx, cp;
            cout << "Організація: "; cin >> org;
            cout << "Адреса: "; cin >> addr;
            cout << "Телефон: "; cin >> ph;
            cout << "Факс: "; cin >> fx;
            cout << "Контактна особа: "; cin >> cp;
            book.addContact(new Colleague(org, addr, ph, fx, cp));
        }
        else if (choice == 3) {
            string s, a, p, bd;
            cout << "Прізвище: "; cin >> s;
            cout << "Адреса: "; cin >> a;
            cout << "Телефон: "; cin >> p;
            cout << "Дата народження: "; cin >> bd;
            book.addContact(new Friend(s, a, p, bd));
        }
        else if (choice == 4) {
            if (book.empty()) cout << "Довідник порожній.\n";
            else book.showAll();
        }
        else if (choice == 5) {
            book.clear();
            cout << "Довідник очищено.\n";
        }
    } while (choice != 0);

    cout << "До побачення!\n";
    return 0;
}
