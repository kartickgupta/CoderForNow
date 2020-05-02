#include <iostream>
using namespace std;

class Car
{
    public:
    string modelname;
    string numberplate;

    void printDetails()
    {
        cout << "The Model Name is \n"<< modelname;
        //cin >>modelname;
        cout << "The Registration Number is :\n" <<numberplate;      
        //cin >> numberplate; 
    }
};

int main(void)
{
    Car Hyundai;
    cin >> Hyundai.modelname;
    cin >> Hyundai.numberplate;
    //Hyundai.modelname = "Creta";
    //Hyundai.numberplate = "MP07-SC-3635";
    Hyundai.printDetails();

    Car Maruti;
    Maruti.modelname = "Baleno";
    Maruti.numberplate = "MP07-KG-0007";
}

