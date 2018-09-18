#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i=1,c=0,p=0;

    while (c<n){
        p=i*3;
        cout << p << " ";
        i++;
        c++;
    }
    return 0;
}
