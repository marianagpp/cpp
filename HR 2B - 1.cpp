#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int filas, columnas, contador=1;
    int fil, col;

    cin>>filas>>columnas;
    cin>>fil>>col;

    int numeros[filas][columnas];

    for(int i=0; i< filas; i++) {
        for(int j=0; j < columnas; j++) {
            numeros[i][j] = contador;
            contador++;}}

    //for(int i=0;i<filas;i++) {
    //    for(int j=0;j<columnas;j++) {
    //        cout<<numeros[i][j]<<" ";
    //    }
    //    cout<<"\n"; }


    // suma de filas
    int sumasf[filas];
    for (int i=0; i<filas; i++){
        int suma = 0;
        for (int j=0; j<filas; j++)
            suma += numeros[i][j];
        sumasf[i] = suma;
    }
    //cout << sumasf[fil]<<endl;

    // suma de columnas
    int sumasc[columnas];
    for (int i=0; i<columnas; i++){
        int suma = 0;
        for (int j=0; j<columnas; j++){

            suma += numeros[j][i];}
            sumasc[i] = suma;
    }
    //cout << sumasc[col]<<endl;

    float sumatotal;
    sumatotal = sqrt(pow(sumasc[col],2)+pow(sumasf[fil],2));

    cout << fixed << setprecision(4) << sumatotal;

    return 0;
}
