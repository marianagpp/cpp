#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    
    cin >> n;

    int a[n];  

    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int neg=0, zero=0, pos=0;
    for (int i=0; i<n; i++){
        if (a[i]==0)
            zero++;
        else if (a[i]> 0)
            pos++;
        else if (a[i]< 0)
            neg++;
        
    }
 
    double ppos = (double) pos*1.0/n;
    double pneg = (double) neg*1.0/n;
    double pzero = (double) zero*1.0/n;
    cout << fixed << setprecision(6)<< ppos << "\n";
    cout << fixed << setprecision(6)<< pneg << "\n";
    cout << fixed << setprecision(6)<< pzero << "\n";
 
}
