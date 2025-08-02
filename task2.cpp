#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    char* title;
    int pages;

public:
    Book(const char* t, int p) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        pages = p;
    }

    Book(const Book& other) {
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
        pages = other.pages;
    }

    ~Book() {
        delete[] title;
    }

    void setTitle(const char* newTitle) {
        delete[] title;
        title = new char[strlen(newTitle) + 1];
        strcpy(title, newTitle);
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book book1("C++ Book", 300);
    Book book2 = book1; 

    book1.setTitle("Claculus Book"); 

    cout << "Book 1: "; book1.display();
    cout << "Book 2: "; book2.display(); 

    return 0;
}


