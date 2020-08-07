#include<bits/stdc++.h>
using namespace std;

class Deposit{
private:
    float principleAoumt;
    int Year;
    float rateOfIntrest;
    float intrest;
public:
    Deposit(float p, int y): principleAoumt(p), rateOfIntrest(10), Year(y) {}   //Constructor Initializer
    
    void alter(float r){                    // Function to Alter Rate of Intrest       
        this->rateOfIntrest = r;
    }
    
    float Intrset(){                        // Function to Calculate Intrest         
        return this->principleAoumt*this->rateOfIntrest*this->Year/100;
    }

    void Print(){                           // Function Print  
        /*  Using setw() manipualtor for width precision */
        cout << "Principle" << setw(20) << "Year" << setw(20) << "Intrest" << endl;    
        cout << this->principleAoumt << setw(20) << this->Year << setw(20) << this->Intrset() << endl;
    }

};

int main(){
    bool flag =true;    // Using Flag to mark the end
    while(flag){
        int  y;
        float p;
        cout << "Input Princple and Year "; 
        cin >> p >> y;

        Deposit* d = new Deposit(p , y);            // Object d created
        cout << "Default rate of Intrest is 10%, Do you wish to change ? (Y /N)  ";
        char yy; cin >>yy;
        if(yy == 'y' || yy == 'Y'){
            float r;
            cout << "Input new Rate of Intrest : ";
            cin >> r;
            d->alter(r);
        }
        cout << endl;
        d->Print();

        cout << "Do you wish to calculate again ? (Y/N) ";  // Question to run again
        cin >>yy;
        if(yy == 'n' || yy  == 'N'){               
            flag = false;           // End
        }
    }
}