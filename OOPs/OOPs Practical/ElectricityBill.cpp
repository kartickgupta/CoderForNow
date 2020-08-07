#include<bits/stdc++.h>
using namespace std;

class Electricity{
protected:
    int units;
    float costPerUnit;
public:
    // Member Function to set Values
    void setUnitsAndCost(){
        cout << "Please input the No. of Units Consumed : ";
        int unit;
        cin >> unit;
        this->units = unit;
        if(this->units >= 300)   this->costPerUnit = 0.60; // if Units consumed > 300, cost set to 60p
        else    this->costPerUnit = 0.50;                   // else cost et to 50
        
    }

    virtual float totalCost(){
        return this->units*this->costPerUnit;
    }

    void getUnitAndCost(){
        cout << "Your consumption is " << this->units << " and cost per unit applied is " << this->costPerUnit*100 << " Paise"<< endl;
    }
};

class More_Electricity : public Electricity{
protected:
    int surcharge;
public:
    More_Electricity() : surcharge(15) {}
    
    float totalCost(){  
        Electricity::getUnitAndCost();              // universal operator to access base class member Function
        if(Electricity::totalCost() <= 250){        // if original cost < 250 , use Base Class Function
            cout << "Bill Amout is less than Rs. 250, therefore no extra Surcharge" << endl;
            return Electricity::totalCost();
        }
        else{               // if original cost > 250,  Function to calculate cost with surcharge
            int extraAmount;
            extraAmount = Electricity::totalCost()*this->surcharge/100;
            cout << "Bill Amout is more than Rs. 250, therefore extra Surcharge of 15%" << endl;
            return extraAmount + Electricity::totalCost();
        }
    }
};

int main(){
    Electricity* Bill1 = new More_Electricity();
    Bill1->setUnitsAndCost();
    cout << Bill1->totalCost();
    cout << " is the total bill" << endl;
    cout << endl;   
    
    Electricity* Bill2 = new More_Electricity();
    Bill2->setUnitsAndCost();
    cout << Bill2->totalCost();
    cout << " is the total bill" << endl;
    cout << endl; 
    Electricity* Bill3 = new More_Electricity();
    Bill3->setUnitsAndCost();
    cout << Bill3->totalCost();
    cout << " is the total bill" << endl;
    cout << endl; 

}