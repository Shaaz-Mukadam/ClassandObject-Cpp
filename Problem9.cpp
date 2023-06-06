#include<iostream>
using namespace std;

class Library{
    char title, author_name;
    int Publication_year;
public:
    void accept() {
    cout<<"Enter the Title of Book";
    cin>>title;

    cout<<"Enter the book Author name";
    cin>>author_name;

    cout<<"Enter the publication Year";
    cin>>Publication_year;
    }

    void display() {
     cout<<"Enter the Title of Book"<<title<<endl;
     cout<<"ENter the Author Name of Book"<<author_name<<endl;
     cout<<"ENter the Publication Year of Book"<<Publication_year<<endl;
    }
};
int main() {
    Library l1;
    l1.accept();
    l1.display();

    return 0;
}
