#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n=6;
    int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];}

    double maximo = a[0];
    double minimo = a[0];
    for (int i=0; i<n; i++){
        if (maximo < a[i])
            maximo = a[i];
        if (minimo > a[i])
            minimo = a[i];}


    cout << fixed << setprecision(4) << minimo/maximo;


    return 0;}
