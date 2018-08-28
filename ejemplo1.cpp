#include <iostream>
using namespace std;
int main() {

    cout <<"Ingrese un número: ";
    double num1;
    cin >> num1;

    cout <<"Ingrese otro número: ";
    double num2;
    cin >> num2;

    cout << "La división entera es: " << num1/num2 << endl;
    cout << "La división real es:" << (int)num1%(int)num2 << endl;

    return 0;
}
