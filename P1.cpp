#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese numero: ";
    cin>>n;
    int arrInt[n][n];
    int m;
    int p=rand()%4; //movimiento n,s,e,o

    if (n%2==0){
        m = n/2;}
    else {
        m = (n/2)+1;}

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arrInt[i][j]=0;
            cout<<setw(5)<<arrInt[i][j]<<" ";}
        cout << "\n";}

    cout<<"Posicion inicial en el centro de la matriz:"<<"\n";
    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            arrInt[m][m]=1;
            cout<<setw(5)<<arrInt[m][m]<<" ";}
        cout << "\n";}

    return 0;}
