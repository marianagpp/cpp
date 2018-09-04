#include <iostream>
using namespace std;

int main(){

    const float p1 = 0.4522;
    const float p2 = 0.7;
    int x=0;
    double costo;

    cout << "Ingrese consumo en Kw: " << endl;
    cin >> x;

if (x<=100){
    costo = x*p1;
}else{
    costo = p1*100+(x-100)*0.2;}

    cout << "El monto a pagar es " << costo << " soles." << endl;

    return 0;}
