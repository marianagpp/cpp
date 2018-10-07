#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout<<"Ingrese el número de la matriz: ";
    cin >> n;
    int arrInt[n][n];

    srand(time(nullptr));

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            arrInt[i][j] = rand() % 4; }}

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << arrInt[i][j] << " "; }
        cout << "\n"; }

    // suma de filas
    int sumasf[n];
    for (int i=0; i<n; i++){
        int suma = 0;
        for (int j=0; j<n; j++)
            suma += arrInt[i][j];
        sumasf[i] = suma; }
    cout << "Las sumas de las filas son:\n";
    for (int i=0; i<n; i++)
        cout << "La fila " << i+1 << " suma: " << sumasf[i] << ".\n";

    // suma de columnas
    int sumasc[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int suma = 0;
            suma += arrInt[i][j];
            sumasc[j] = suma; }}
    cout << "Las sumas de las columnas son:\n";
    for (int j=0; j<n; j++)
        cout << "La columna " << j+1 << " suma: " << sumasc[j] << ".\n";

    return 0; }
