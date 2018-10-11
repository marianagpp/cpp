#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
int n;
    cout << "ingrese el tamanio de la matriz:";
    cin >> n;

    int arrInt[n][100];

    srand(time(nullptr));

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            arrInt[i][j] = rand() % 100;
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << arrInt[i][j] << " ";
        }
        cout << "\n";
    }
    
    int col = 0;
    cout << "\ningrese la columna:";
    cin >> col;
    
    int suma=0;
    for (int i=0; i<n; i++)
        suma += arrInt[i][col];
    float promedio = (float)suma*1.0/n;
    
    cout << promedio;
}
