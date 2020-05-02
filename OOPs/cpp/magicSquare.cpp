#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int size,randNum, sum;
    cout << "Size of Magic Square" << endl;
    cin >> size;
    int square[size][size], check1[size], check2[size];
    srand(time(NULL));
    while(bool magic = true)
    {
        for(int i = 0; i< size; i++)
        {
            for(int j =0; j < size; j++)
            {
                square[i][j] = rand()%10;
            }
        }

        for(int i = 0; i< size; i++)
        {
            for(int j =0; j < size; j++)
            {
                cout << square[i][j]<< " ";
            }
           cout << endl;
        }


        for(int i = 0; i< size; i++)
        {   
            sum =0;
            for(int j =0; j < size; j++)
            {
                sum+= square[i][j];
            }
            check1[i] = sum;
        }

        for(int j = 0; j< size; j++)
        {   
            sum =0;
            for(int i =0; i < size; i++)
            {
                sum+= square[i][j];
            }
            check2[j] = sum;
        }
        break;

    }


}