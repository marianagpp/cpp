#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Ingrese un número: ";
    cin >> x;

    if (x==1){
        cout << "Otoño" << "\n";}
    else if (x==2){
        cout << "Invierno" << "\n";}
    else if (x==3){
        cout << "Primavera" << "\n";}
    else if (x==4){
        cout << "Verano" << "\n";}
    else{
        cout << "Ingrese otro número: ";
        cin >> x;
    }

    return 0;}

