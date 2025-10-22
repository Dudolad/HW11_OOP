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
        cout << "\n--- ���������� ������� ---\n";
        cout << "1. ������ �������\n";
        cout << "2. ������ �����\n";
        cout << "3. ������ ������\n";
        cout << "4. �������� �� ��������\n";
        cout << "5. ����� �� ��������\n";
        cout << "6. ���������� �������\n";
        cout << "0. �����\n";
        cout << "��� ����: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            string s, a, p;
            cout << "�������: "; getline(cin, s);
            cout << "������: "; getline(cin, a);
            cout << "�������: "; getline(cin, p);
            book.addContact(new Person(s, a, p));
        }
        else if (choice == 2) {
            string s, a, p, bd;
            cout << "�������: "; getline(cin, s);
            cout << "������: "; getline(cin, a);
            cout << "�������: "; getline(cin, p);
            cout << "���� ����������: "; getline(cin, bd);
            book.addContact(new Friend(s, a, p, bd));
        }
        else if (choice == 3) {
            string org, addr, ph, fx, cp;
            cout << "����������: "; getline(cin, org);
            cout << "������: "; getline(cin, addr);
            cout << "�������: "; getline(cin, ph);
            cout << "����: "; getline(cin, fx);
            cout << "��������� �����: "; getline(cin, cp);
            book.addContact(new Colleague(org, addr, ph, fx, cp));
        }
        else if (choice == 4) {
            book.showAll();
        }
        else if (choice == 5) {
            string surname;
            cout << "������ ������� ��� ������: "; getline(cin, surname);
            auto results = book.searchBySurname(surname);
            if (results.empty())
                cout << "�������� �� ��������!\n";
            else {
                cout << "������� ��������:\n";
                for (auto c : results)
                    c->show();
            }
        }
        else if (choice == 6) {
            int index;
            cout << "������ ������ �������� ��� ����������� (���������� � 0): ";
            cin >> index;
            cin.ignore(); 

            int type;
            cout << "��� ������ �������� (1-�������, 2-����, 3-������): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string s, a, p;
                cout << "�������: "; getline(cin, s);
                cout << "������: "; getline(cin, a);
                cout << "�������: "; getline(cin, p);
                book.editContact(index, new Person(s, a, p));
            }
            else if (type == 2) {
                string s, a, p, bd;
                cout << "�������: "; getline(cin, s);
                cout << "������: "; getline(cin, a);
                cout << "�������: "; getline(cin, p);
                cout << "���� ����������: "; getline(cin, bd);
                book.editContact(index, new Friend(s, a, p, bd));
            }
            else if (type == 3) {
                string org, addr, ph, fx, cp;
                cout << "����������: "; getline(cin, org);
                cout << "������: "; getline(cin, addr);
                cout << "�������: "; getline(cin, ph);
                cout << "����: "; getline(cin, fx);
                cout << "��������� �����: "; getline(cin, cp);
                book.editContact(index, new Colleague(org, addr, ph, fx, cp));
            }
        }

    } while (choice != 0);

    return 0;
}