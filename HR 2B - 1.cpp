#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

    int m, n;
    int fil, col;
    cin >> m >> n;
    cin >> fil >> col;

    int a[m][n];

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = i;}}

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << a[m][n] << " ";}
        cout << "\n";}

    double sumafil=0;
    for (int i=0; i<n; i++)
        sumafil += a[fil][i];

    double sumacol=0;
    for (int i=0; i<m; i++)
        sumacol += a[i][col];

    double sumatotal;
    sumatotal = sqrt(pow(sumacol, 2) + pow(sumafil, 2));

    cout << sumatotal;
}
