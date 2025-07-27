#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    Library library;
    int choice;

    do {
        cout << "--------------Library Manegment System!-------------"<<endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Borrow Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Exit" << endl;
        cout << " Enter Your Choice:" << endl;
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title);
            cout << "Enter Book Author: ";
            getline(cin, author);
            library.addBook(id, title, author);
        } 

    } while (choice != 6);

    return 0;
}