#include <iostream>
#include<iomanip>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arrInt[n][n];
    int fila;
    int columna;
    int sumatotal=0;

    srand(time(nullptr));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arrInt[i][j]=rand()%3;
        }
    }
    for (int i=0; i<n; i++){
        fila=0;
        for (int j=0; j<n; j++){
            sumatotal+=arrInt[i][j];
            fila+=arrInt[i][j];
            columna+=arrInt[j][i];
            cout<<setw(5)<<arrInt[i][j]<<" ";}
        cout << "\n";
    cout<<"Suma de la fila "<< i+1 << " es " <<fila<<"\n";}
    cout<<"La suma de toda la matriz es "<<sumatotal<<"\n";

    return 0;}
