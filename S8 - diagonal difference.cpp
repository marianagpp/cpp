#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    int A[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> A[i][j];

    }}


    int sumaL = 0;
    for (int i=0; i<n; i++)
        sumaL += A[i][i];

    int j=n-1;
    int sumaR = 0;
    for (int i=0; i<n; i++){
        sumaR += A[i][j--];
    }

    cout << abs(sumaL-sumaR);


    return 0;
}
