#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Ingresa un número: ";
    cin >> x;
    int i=1,c=1,p=0;

while (c<x){
    c++;
    if (c%2==0){
        p=p+c;}
    if (c==x){
        cout << p;}
}
    return 0;
}
