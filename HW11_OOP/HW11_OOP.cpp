#include "Person.h"
#include "Friend.h"
#include "Colleague.h"
#include "ContactBook.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    ContactBook book;
    int choice;

    do {
        cout << "\n--- Телефонний довідник ---\n";
        cout << "1. Додати Персону\n";
        cout << "2. Додати Друга\n";
        cout << "3. Додати Колегу\n";
        cout << "4. Показати всі контакти\n";
        cout << "5. Пошук за прізвищем\n";
        cout << "6. Редагувати контакт\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            string s, a, p;
            cout << "Прізвище: "; getline(cin, s);
            cout << "Адреса: "; getline(cin, a);
            cout << "Телефон: "; getline(cin, p);
            book.addContact(new Person(s, a, p));
        }
        else if (choice == 2) {
            string s, a, p, bd;
            cout << "Прізвище: "; getline(cin, s);
            cout << "Адреса: "; getline(cin, a);
            cout << "Телефон: "; getline(cin, p);
            cout << "Дата народження: "; getline(cin, bd);
            book.addContact(new Friend(s, a, p, bd));
        }
        else if (choice == 3) {
            string org, addr, ph, fx, cp;
            cout << "Організація: "; getline(cin, org);
            cout << "Адреса: "; getline(cin, addr);
            cout << "Телефон: "; getline(cin, ph);
            cout << "Факс: "; getline(cin, fx);
            cout << "Контактна особа: "; getline(cin, cp);
            book.addContact(new Colleague(org, addr, ph, fx, cp));
        }
        else if (choice == 4) {
            book.showAll();
        }
        else if (choice == 5) {
            string surname;
            cout << "Введіть прізвище для пошуку: "; getline(cin, surname);
            auto results = book.searchBySurname(surname);
            if (results.empty())
                cout << "Контакти не знайдено!\n";
            else {
                cout << "Знайдені контакти:\n";
                for (auto c : results)
                    c->show();
            }
        }
        else if (choice == 6) {
            int index;
            cout << "Введіть індекс контакту для редагування (починається з 0): ";
            cin >> index;
            cin.ignore(); 

            int type;
            cout << "Тип нового контакту (1-Персона, 2-Друг, 3-Колега): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string s, a, p;
                cout << "Прізвище: "; getline(cin, s);
                cout << "Адреса: "; getline(cin, a);
                cout << "Телефон: "; getline(cin, p);
                book.editContact(index, new Person(s, a, p));
            }
            else if (type == 2) {
                string s, a, p, bd;
                cout << "Прізвище: "; getline(cin, s);
                cout << "Адреса: "; getline(cin, a);
                cout << "Телефон: "; getline(cin, p);
                cout << "Дата народження: "; getline(cin, bd);
                book.editContact(index, new Friend(s, a, p, bd));
            }
            else if (type == 3) {
                string org, addr, ph, fx, cp;
                cout << "Організація: "; getline(cin, org);
                cout << "Адреса: "; getline(cin, addr);
                cout << "Телефон: "; getline(cin, ph);
                cout << "Факс: "; getline(cin, fx);
                cout << "Контактна особа: "; getline(cin, cp);
                book.editContact(index, new Colleague(org, addr, ph, fx, cp));
            }
        }

    } while (choice != 0);

    return 0;
}