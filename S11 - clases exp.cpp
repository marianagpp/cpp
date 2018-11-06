#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Derivada{
private:
    double x;
    int r;

public:
    void setX(double _x) {x = _x;};
    void setR(int _r) { r = _r;};
    double derivar();
};

double Derivada::derivar(){
    return r*pow(x, r-1);
}

int main() {
    double x=0;
    int r=0;
    Derivada f;
    cin >> x >> r;
    f.setX(x);
    f.setR(r);
    double res = f.derivar();
    cout << fixed << setprecision(4) << res << endl;
}
