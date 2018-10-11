#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int x;
    cin >> x;

    for (int i=1; i<x+1; i++){
        cout.fill(' ');
        cout.width(x-(i-1));
        for (int n=0; n<i; n++){

        cout << "#";}
    cout << "\n";}

    return 0;}
