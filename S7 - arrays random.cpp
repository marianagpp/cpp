#include <iostream>
#include<iomanip>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arrInt[n][n];

    srand(time(nullptr));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arrInt[i][j]=rand()%100;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<setw(5)<<arrInt[i][j]<<" ";
        }
        cout << "\n";
    }


    return 0;}
