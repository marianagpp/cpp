#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // hallar la distancia y el punto medio de dos puntos
    
    int x1, x2 = 0;
    int y1, y2 = 0;

    double distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double puntomediox = (x1+x2)/2;
    double puntomedioy = (y1+y2)/2;

    cout << "Ingresa dos puntos en x: " << endl;
    cin >> x1 >> x2;
    cout << "Ingresa dos puntos en y: " << endl;
    cin >> y1 >> y2;

    cout << distancia << " ; " << puntomediox << " ; " << puntomedioy << endl;

    return 0;}

