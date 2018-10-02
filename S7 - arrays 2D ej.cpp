#include <iostream>
using namespace std;


int main(){

    int x;
    int a[2][3];
    a[0][0]=10;

    x=a[1][2];
    cout << "x: " << x << "\n";

    x=a[0][0];
    cout << "x: " << x << "\n";

    return 0;}
