#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream writeToFile;
    fstream readFromFile;
    string textToFile;
    string textFromFile;

    writeToFile.open("SampleFile.txt", ios::out | ios::app | ios::ate);
    if(writeToFile.is_open())
    {
        writeToFile << "This is line 1 \n";
        cout << "Please Input the Data \n";
        getline(cin, textToFile);
        writeToFile << textToFile;
        writeToFile.close();
    }

    readFromFile.open("SampleFile.txt", ios::in);
    if(readFromFile.is_open())
    {
        cout<< "File Reading begins from here ! \n";
        while (readFromFile.good())
        {
            getline(readFromFile, textFromFile);
            cout << textFromFile << endl;
        }
        readFromFile.close();
        
    }
    
}