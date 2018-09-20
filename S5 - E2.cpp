#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    int b;
    cout << "Ingrese su base: ";
    cin >> b;

    int c=0;
    int base10=0;

    while (n>0){
        int r=n%10;
        //cout << r << "\n";
        n/=10;
        base10 += r*pow(b,c);
        c++;
    }
cout << base10;
    return 0;
}

//cambio de base x a base 10
