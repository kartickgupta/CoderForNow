#include<iostream>

using namespace std;

int main()
{   
    int n,a,b;
    cin >> n;
    int mat[n][n];
    
    for (int i= 0; i < n ;i ++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i= 0; i < n ;i ++)
    {   
        for(int j =0; j <n ; j++)
        {
            cout << mat[i][j];
        }
        cout<<endl;
    }
    cout << "-----------------------------------"<<endl;
    for (int i =0; i <(n+1)/2; i++)
    {
        a=0,b=0;
        for(int j =0; j<(n+1)/2; j++)
        {
            /*mat[i][j] = mat[i][j]+mat[j][j];
            mat[j][i] = mat[i][j] - mat[j][i];
            mat[i][j] = mat[i][j] - mat[i][j];*/
           a= mat[i][j];
           b= mat[j][i];
           a= a+b;
           b = a-b;
           a = a-b;
           mat[i][j] =a;
           mat[j][i] = b;
        }
    }
    for (int i= 0; i < n ;i ++)
    {   
        for(int j =0; j <n ; j++)
        {
            cout << mat[i][j];
        }
        cout<<endl;
    }
}