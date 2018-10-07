
#include <iostream>
#include <ctime>

using namespace std;

void arrIntA(int arrInt[], int n);
void arr2dAleatorio(int arrInt[][100], int n);

int maxvalor(int arrInt[], int n){
    int maximo = arrInt[0];
    for (int i=0; i<n; i++){
        if (maximo < arrInt[i])
            maximo = arrInt[i];
    }
    return maximo;
}

float promedio(int arrInt[], int n){
    float suma = 0;
    for (int i=0; i<n; i++){
        suma += arrInt[i];
    }
    float promedio = suma / n;
    return promedio;
}

void copiaArr(int arrInt[], int copyArr[], int n){
    int pos = n-1;
    for (int i=0; i<n; i++) {
        copyArr[pos--] = arrInt[i];
    }

    for (int i=0; i<n; i++)
        cout << copyArr[i] << " ";
}

int main() {

    int n;
    cout << "ingrese n:";
    cin >> n;
    int arrInt[n];
    arrIntA(arrInt, n);

    //cout << "Crear un array de 2d:\n";
    //int arrInt2D[n][100];
    //arr2dAleatorio(arrInt2D, n);
    cout << "maximo valor: " << maxvalor(arrInt, n) << "\n";
    float promedio1 = promedio(arrInt, n);
    cout << "promedio: " << promedio1 << "\n";
    int copy[n];
    copiaArr(arrInt, copy, n);


    return 0;
}

void arrIntA(int arrInt[], int n) {

    srand(time(nullptr));

    for (int i=0; i<n;i++)
        arrInt[i] = rand()%100;

    for (int j=0; j<n;j++)
        cout << "j[" << j << "]=" << arrInt[j] << "\n";

}

void arr2dAleatorio(int arrInt[][100], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arrInt[i][j] = rand()%100;
        }

    }

    for (int i=0; i<n;i++)
        for (int j=0; j<n; j++)
            cout << "j[" << i << "][" << j << "]:"<< arrInt[i][j] << "\n";
}
