#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "ingrese n: tamanio de la matriz:";
    cin >> n;

    int A[n][n];


    srand(time(nullptr));

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;
        }
    }


    cout << "matriz A:\n";
    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << A[i][j] << " ";
        }
        cout << "\n";
    }
    int sumaL = 0;
    for (int i=0; i<n; i++)
          sumaL += A[i][i];

    int j=n-1;
    int sumaR = 0;
    for (int i=0; i<n; i++){
      sumaR += A[i][j--];
    }

    cout << "sumaL:" << sumaL << "sumaR:" << sumaR; 
    
      
    return 0;
}
