#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int x;
    cout << "Ingresa un número: ";
    cin >> x;
    double i=1;
    int c=1,p=0;

while (c<x){
    c++;
    i=i+(pow(c,2));
    if (c==x){
        cout << i;}
}
    return 0;
}
