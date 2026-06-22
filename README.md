# Library-Management-System-LMS-CPP

## Overview

The Library Management System is a C++ console-based application developed using Object-Oriented Programming (OOP) concepts. It allows users to manage books, members, and borrowing records efficiently through a simple menu-driven interface.

## Features

* Add new books to the library.
* Add library members.
* Display all available books.
* Search books by title.
* Search books by author.
* Issue books to members.
* Return issued books.
* Track book availability status.

## Technologies Used

* C++
* Object-Oriented Programming (Classes and Objects)
* STL Vector Container
* Console-Based User Interface

## Project Structure

```
LibraryManagementSystem/
│
├── library.cpp
└── README.md
```

## Classes Used

### Book

Stores information about a book:

* Book ID
* Title
* Author
* Issue Status

### Member

Stores information about a library member:

* Member ID
* Member Name

### Library

Handles all library operations:

* Add Book
* Add Member
* Display Books
* Search by Title
* Search by Author
* Issue Book
* Return Book

## Compilation

Compile the program using g++:

```bash
g++ library.cpp -o library
```

## Execution

Run the executable:

```bash
./library
```

## Sample Menu

```
===== LIBRARY MANAGEMENT SYSTEM =====
1. Add Book
2. Add Member
3. Display Books
4. Search by Title
5. Search by Author
6. Issue Book
7. Return Book
8. Exit
```

## Example Workflow

1. Add a new book.
2. Add a member.
3. Search for a book by title or author.
4. Issue the book.
5. Return the book when finished.
6. View updated availability status.

## Object-Oriented Concepts Demonstrated

* Classes and Objects
* Encapsulation
* Data Abstraction
* Dynamic Data Storage using Vectors

## Expected Outcome

The application provides a simple and efficient way to manage library records, enabling book addition, searching, issuing, and returning while maintaining accurate availability information.

## Future Enhancements

* File Handling for Permanent Storage
* Member-wise Borrowing History
* Fine Calculation for Late Returns
* Admin Authentication
* Graphical User Interface (GUI)
* Database Integration (MySQL/SQLite)

## Author

Developed as a C++ Object-Oriented Programming project for academic purposes.
