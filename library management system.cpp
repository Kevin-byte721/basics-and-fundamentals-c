#include <iostream>
#include <vector>
#include <string>
 using namespace std;

class Book {
private:
    string title;
    string author;
    string release_date;
    string genre;

public:
    Book(string title, string author, string release_date, string genre) :
        title(title), author(author), release_date(release_date), genre(genre) {}

    ~Book() {}

    void display() const{
        cout << "Book name: " << title << endl;
        cout << "Book author: " << author << endl;
        cout << "Book release date: " << release_date << endl;
        cout << "Book genre: " << genre << endl;
    }
};

void addBook(vector<Book>& books) { // Moved add function outside of book class.
    string title, author, release_date, genre;

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter book author: ";
    getline(cin, author);

    cout << "Enter book release date: ";
    getline(cin, release_date);

    cout << "Enter book genre: ";
    getline(cin, genre);

    books.push_back(Book(title, author, release_date, genre));
}

void displayBooks(const vector<Book>& books) {
    cout << endl;
	cout << "Results" << endl;
    for (size_t i = 0; i < books.size(); i++) {
        books[i].display();
        cout << endl;
    }
}

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << endl;
		cout << "1 Add Book 2 Display Book 3 Exit: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                displayBooks(books);
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}