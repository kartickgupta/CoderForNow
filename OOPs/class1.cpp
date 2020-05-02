#include <iostream>

using namespace std;

class Book{
private:
    string genre;
public:
    string title;
    string author;
    int pages;
        
    Book(string aTitle, string aAuthor, int aPages, string aGenre){ //Constructor name and Class name is always same!!!
        title = aTitle;
        author = aAuthor;
        pages = aPages;
        genre = aGenre;
    }
    int print(){
        cout<< genre << "endl";
    }
};

int main(void)
{
    Book CLRS("Intro","clrs",500,"edu");
    cout<< CLRS.print()<< endl;
    cout << CLRS.author << endl;
    cout << CLRS.title;
   
}
