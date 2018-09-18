#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    double i=0,p=0;
    int c=0;

    while (c<n) {
        c++;
        i = 1 / sqrt(c);
        p=p+i;
        if (c == n) {
            cout << setprecision(4) << p;
        }
    }
    return 0;
}
