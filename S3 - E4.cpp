#include <iostream>
using namespace std;

int main() {

    // volver los valores de ambos ángulos en un solo número y sumar los dos ángulos

    int g1, m1, s1, g2, m2, s2;

    cout << "Ingrese valores para el ángulo 1 (grados, minutos y segundos:" << endl;
    cin >> g1 >> m1 >> s1;
    cout << "Ingrese valores para el ángulo 2 (grados, minutos y segundos:" << endl;
    cin >> g2 >> m2 >> s2;

    int G1 = g1/60;
    int G1r = g1%60;

    int M1 = G1r/60;
    int M1r = G1r%60;

    int S1 = M1r/60;
    int S1r = M1r%60;

    int G2 = g2/60;
    int G2r = g2%60;

    int M2 = G2r/60;
    int M2r = G2r%60;

    int S2 = M2r/60;
    int S2r = M2r%60;

    cout << "La sumatoria es: " << G1+G2 << " ; " << M1+M2 << " ; " << S1+S2 << " ; " << S1r+S2r << endl;

    return 0;}

