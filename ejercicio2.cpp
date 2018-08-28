#include <iostream>
using namespace std;
int main() {

    const float pi=3.1415;
    float radian;
    float resultado;

    cout << "Ingrese el ángulo en radianes: " << endl;
    cin >> radian;

    resultado = radian*180/pi;

    cout << "El ángulo convertido a sexagesimales es: " << resultado << endl;

    return 0;
}
