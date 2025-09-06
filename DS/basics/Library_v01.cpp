#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Book{
    private:    
    string title; 
    string author;
    int bookID; 
    bool isAvailable;
    
    public:
    // Constructor of Book class to initialize class
    Book(string t, string a, int id){
        title = t;
        author = a;
        bookID = id;
        isAvailable = true;
    }

    //function to display details of book
    void displayBookInfo(){
        cout<<"ID : "<<bookID
            <<", Book Name : "<<title
            <<", Author : "<<author
            <<", Availability : "<<(isAvailable ? "Yes" : "No")
            <<endl;
    }

    // function to burrow a book
    void borrowBook(){
        if(isAvailable){
            isAvailable = false;
            cout<<title<<" has been borrowed."<<endl;
        }
        else{
            cout<<title<<" is currently unavailable."<<endl;
        }
    }

    // function to return a book
    void returnBook(){
        isAvailable = true;
        cout<<title<<" has been returned."<<endl;
    }

    // gather the book ID ot search about it
    int getID(){
        return bookID;
    }

    // check whether book is available or not
    bool chechAvailability(){
        return isAvailable;
    }


};

class Library{
    private:
    vector<Book> books;

    public:
    void addBook(Book b){
        books.push_back(b);
    }

    void showAllBooks(){
        cout<<"\nAvailable Books:"<<endl;
        for(auto &b : books){
            b.displayBookInfo();
        }
    }

    void borrowBookById(int id){
        for( auto &b : books){
            if(b.getID()==id){
                b.borrowBook();
                return;
            }
        }
        cout<<"Book with ID: "<< id << " Not Found!"<<endl;
    }

};

int main() {
    Library lib;  
    int choice;  

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Borrow a Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                string title, author;
                int id;
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Book Title: ";
                getline(cin, title);
                cout << "Enter Author Name: ";
                getline(cin, author);

                Book newBook(title, author, id);
                lib.addBook(newBook);
                cout << "Book added successfully!\n";
                break;
            }
            case 2:
                lib.showAllBooks();
                break;
            case 3: {
                int id;
                cout << "Enter Book ID to borrow: ";
                cin >> id;
                lib.borrowBookById(id);
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 4);

    return 0;
}

