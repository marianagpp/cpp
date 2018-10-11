#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n=5;
    int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];}

    int maximo = a[0];
    int minimo = a[0];
    for (int i=0; i<n; i++){
        if (maximo < a[i])
            maximo = a[i];
        if (minimo > a[i])
            minimo = a[i];}

    int maxsum=0;
    int minsum=0;
    for (int i=0; i<n; i++){
        if (a[i]<maximo)
            minsum += a[i];
        if (a[i]>minimo)
            maxsum += a[i];}

    cout << minimo << " y " << maximo << endl;

    cout << "Suma array minima y maxima: " << minsum << " " << maxsum;


return 0;}
