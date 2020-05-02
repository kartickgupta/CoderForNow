#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream writeToFile;
    fstream readFromFile;
    string textToWrite;
    string textToRead;

    writeToFile.open("TestFile.txt", ios_base::out);
    if(writeToFile.is_open())
    {
        writeToFile << "From here the file begins \n";
        cout << "INput the Data in File \n";
        getline(cin, textToWrite);
        writeToFile << textToWrite << endl;
        writeToFile.close();
    }
    else
    {
        cout<< "Unable to read file";
    }
    
    readFromFile.open("TestFile.txt", ios_base::in);
    if(readFromFile.is_open())
    {
        while(readFromFile.good())
        {
            getline(readFromFile, textToRead);
            cout << textToRead << endl;
        }
    }   readFromFile.close();
}