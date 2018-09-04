#include <iostream>
using namespace std;

int main(){

    const float p1 = 0.4522;
    const float p2 = 0.7;
    int x=0;
    double costo;

    cout << "Ingrese consumo en Kw: " << endl;
    cin >> x;

costo = (x<=100)* p1*x + (x>100)* p1*100 + (x-100)*p2;

    cout << "El monto a pagar es " << costo << " soles." << endl;

    return 0;}
