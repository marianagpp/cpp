#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#include <iostream>
#include <iomanip>



using namespace std;
int main()
{
    int Juliana = 0;
    int Javier = 0;

    int a[] = {0, 0, 0, 0, 0};
    int b[] = {0, 0, 0, 0, 0};

    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    cin >> b[0] >> b[1] >> b[2] >> b[3] >> b[4];

    for (int i=0; i<5; i++){
        if (a[i] > b[i]){
            Juliana++;
        }
        else if (a[i] < b[i]) {
            Javier++;
        }
    }

    for (int i=0; i<1; i++){
    if (Javier > Juliana)
        cout << "Javier";
    else if (Juliana > Javier)
        cout << "Juliana";
    else if (Juliana == Javier)
        cout << "Blanco";}



}
