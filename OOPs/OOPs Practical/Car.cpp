#include<bits/stdc++.h>
using namespace std;

class MyCar{
private:
    string name, model;
    int cost;
public:
    void getData();
    friend void OutputToFile(const MyCar &car);
    friend void ReadFromFile();
};

void MyCar::getData(){
    string n, m;
    int c;
    cout << "Input Car Name, Model and Price: ";
    cin >> n >> m >> c;
    this->name = n;
    this->model = m;
    this->cost = c;
}
// Defining Friend Function
void OutputToFile(const MyCar &car){
    ofstream ToFile;
    ToFile.open("MyCar.txt",std::ios_base::app);    // Open file from last and append
    ToFile.seekp(0, ios::end);
    string inputText = car.name + " " + car.model + " "  + to_string(car.cost);
    ToFile  << inputText << endl;       // Addition to file
    ToFile.close();
    return;
}
// Defining Friend Function
void ReadFromFile(){
    ifstream FromFile("MyCar.txt");
    string outputText;
    while( getline(FromFile, outputText)){        
        cout << outputText << endl; // Output
    }
    FromFile.close();
}

int main(){
    MyCar C;
    C.getData();
    OutputToFile(C);
    ReadFromFile();

    MyCar B;
    B.getData();
    OutputToFile(B);
    ReadFromFile();

    MyCar A;
    A.getData();
    OutputToFile(A);
    ReadFromFile();

}