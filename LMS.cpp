#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
public:
    int bookID;
    string title;
    string author;
    bool issued;

    Book(int id, string t, string a)
    {
        bookID = id;
        title = t;
        author = a;
        issued = false;
    }
};

class Member
{
public:
    int memberID;
    string name;

    Member(int id, string n)
    {
        memberID = id;
        name = n;
    }
};

class Library
{
private:
    vector<Book> books;
    vector<Member> members;

public:
    void addBook()
    {
        int id;
        string title, author;

        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        books.push_back(Book(id, title, author));

        cout << "Book Added Successfully!\n";
    }

    void addMember()
    {
        int id;
        string name;

        cout << "\nEnter Member ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Member Name: ";
        getline(cin, name);

        members.push_back(Member(id, name));

        cout << "Member Added Successfully!\n";
    }

    void displayBooks()
    {
        if (books.empty())
        {
            cout << "\nNo Books Available.\n";
            return;
        }

        cout << "\n----- Book List -----\n";

        for (auto &b : books)
        {
            cout << "ID: " << b.bookID
                 << "\nTitle: " << b.title
                 << "\nAuthor: " << b.author
                 << "\nStatus: " << (b.issued ? "Issued" : "Available")
                 << "\n-------------------\n";
        }
    }

    void searchByTitle()
    {
        string title;

        cin.ignore();
        cout << "\nEnter Title to Search: ";
        getline(cin, title);

        bool found = false;

        for (auto &b : books)
        {
            if (b.title == title)
            {
                cout << "\nBook Found!\n";
                cout << "ID: " << b.bookID
                     << "\nAuthor: " << b.author
                     << "\nStatus: " << (b.issued ? "Issued" : "Available")
                     << endl;

                found = true;
            }
        }

        if (!found)
            cout << "Book Not Found.\n";
    }

    void searchByAuthor()
    {
        string author;

        cin.ignore();
        cout << "\nEnter Author Name: ";
        getline(cin, author);

        bool found = false;

        for (auto &b : books)
        {
            if (b.author == author)
            {
                cout << "\nBook Found!\n";
                cout << "ID: " << b.bookID
                     << "\nTitle: " << b.title
                     << "\nStatus: " << (b.issued ? "Issued" : "Available")
                     << endl;

                found = true;
            }
        }

        if (!found)
            cout << "No Books Found by this Author.\n";
    }

    void issueBook()
    {
        int id;

        cout << "\nEnter Book ID to Issue: ";
        cin >> id;

        for (auto &b : books)
        {
            if (b.bookID == id)
            {
                if (b.issued)
                {
                    cout << "Book Already Issued.\n";
                }
                else
                {
                    b.issued = true;
                    cout << "Book Issued Successfully!\n";
                }
                return;
            }
        }

        cout << "Book Not Found.\n";
    }

    void returnBook()
    {
        int id;

        cout << "\nEnter Book ID to Return: ";
        cin >> id;

        for (auto &b : books)
        {
            if (b.bookID == id)
            {
                if (!b.issued)
                {
                    cout << "Book Was Not Issued.\n";
                }
                else
                {
                    b.issued = false;
                    cout << "Book Returned Successfully!\n";
                }
                return;
            }
        }

        cout << "Book Not Found.\n";
    }
};

int main()
{
    Library lib;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Display Books\n";
        cout << "4. Search by Title\n";
        cout << "5. Search by Author\n";
        cout << "6. Issue Book\n";
        cout << "7. Return Book\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            lib.addBook();
            break;

        case 2:
            lib.addMember();
            break;

        case 3:
            lib.displayBooks();
            break;

        case 4:
            lib.searchByTitle();
            break;

        case 5:
            lib.searchByAuthor();
            break;

        case 6:
            lib.issueBook();
            break;

        case 7:
            lib.returnBook();
            break;

        case 8:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 8);

    return 0;
}