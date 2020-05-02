#include<bits/stdc++.h>

using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    
    Date(int d, int m, int y)
    {
        day =d;
        month =m;
        year = y;
    }

    void setdates(int d){
        day = d;
    }

    int getdates() const{
        return day;
    }
    void setmonths(int m){
        month = m;
    }

    int getmonths() const{
        return month;
    }
    void setyears(int y){
        year = y;
    }

    int getyears() const{
        return year;
    }

    void print() const{
        cout<< setfill('0');
        cout << setw(2) << day << ":" << setw(2) << month << ":" << setw(4) << year << endl;
    }    
    
};
void dateDifference();
int yearInDays(int date, int month, int year);

int main(){
    Date d1(2,3,1999);
    d1.print();
    dateDifference();   

}

int yearInDays(int date, int month, int year){
        if (year%4==0){        
            if (year%100!=0){            
                year= year*366;
            }
        }    
        else if (year%400==0){              
           year = year*366;            
        }
        else
            year = year*356;

        
        if( month == 1 || 3 || 5 || 7 || 8 || 10 || 12){
            month = month*31;
        }
        else{
            month = month*30;
        }
        return date+month+year;   
    }
void dateDifference(){
    int datesub, monthsub, yearsub, sum[1];
    for(int i =0; i<2; i++){
        cout << "Input Date" << i+1<< " month, year as dd mm yyyy : ";
        cin >> datesub >> monthsub >> yearsub;
        sum[i] = yearInDays(datesub, monthsub, yearsub);
    }
    cout << "The differene is "<< abs(sum[0]-sum[1]) << " days"<< endl;

}