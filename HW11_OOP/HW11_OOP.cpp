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
        cout << "\n--- ���������� ������� ---\n";
        cout << "1. ������ �������\n";
        cout << "2. ������ ������\n";
        cout << "3. ������ �����\n";
        cout << "4. �������� �� ��������\n";
        cout << "5. �������� �������\n";
        cout << "0. �����\n";
        cout << "��� ����: ";
        cin >> choice;

        if (choice == 1) {
            string s, a, p;
            cout << "�������: "; cin >> s;
            cout << "������: "; cin >> a;
            cout << "�������: "; cin >> p;
            book.addContact(new Person(s, a, p));
        }
        else if (choice == 2) {
            string org, addr, ph, fx, cp;
            cout << "����������: "; cin >> org;
            cout << "������: "; cin >> addr;
            cout << "�������: "; cin >> ph;
            cout << "����: "; cin >> fx;
            cout << "��������� �����: "; cin >> cp;
            book.addContact(new Colleague(org, addr, ph, fx, cp));
        }
        else if (choice == 3) {
            string s, a, p, bd;
            cout << "�������: "; cin >> s;
            cout << "������: "; cin >> a;
            cout << "�������: "; cin >> p;
            cout << "���� ����������: "; cin >> bd;
            book.addContact(new Friend(s, a, p, bd));
        }
        else if (choice == 4) {
            if (book.empty()) cout << "������� �������.\n";
            else book.showAll();
        }
        else if (choice == 5) {
            book.clear();
            cout << "������� �������.\n";
        }
    } while (choice != 0);

    cout << "�� ���������!\n";
    return 0;
}
