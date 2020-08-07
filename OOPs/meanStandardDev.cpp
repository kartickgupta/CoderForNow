#include<bits/stdc++.h>
using namespace std;

double calculateMean(double *arr, int size);
double calculateSD(double *data, double *mean, int size);

int main() {
    int size;
    cout << "How many numbers you want to compute ? ";
    cin >> size;
    double *data, Mean;
    data = (double*)malloc(size*sizeof(double));
    cout << "Enter the elements: "<< endl;
    for (int i = 0; i <size; ++i){
        cin>> data[i];
    }
    cout << "\nMean = " << calculateMean(data, size)<< endl;
    Mean = calculateMean(data, size);
    cout << "\nStandard Deviation = " << calculateSD(data, &Mean, size)<< endl;
    free(data);
    return 0;
}

double calculateMean(double *arr, int size){
    double mean =0;
    for (int i = 0; i <size; i++)
    {
        mean+=arr[i];
    }
    return mean/size;
    
}
double calculateSD(double *data, double *mean, int size) {
    double SD;
    for(int i=0; i<size; i++){
        SD += pow(data[i] - *mean, 2);
    }
    return sqrt(SD / size);
}