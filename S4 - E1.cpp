#include <iostream>
using namespace std;

int main (){

    int x;
    int c1=0,c2=0,c3=0;

    x=1;
    while (x!=0) {
        cout << "Ingrese número: ";
        cin >> x;
        if (x != 0) {
        c1++;

        if (x % 2 == 0) {
            c2++;
        } else if (x % 2 != 0) {
            c3++;
        }
      }
    }
cout << "Los números leídos son " << c1 << ", los números pares " << c2 << ", y los impares " << c3 << ".";

return 0;}
