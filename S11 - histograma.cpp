#include <iostream>
using namespace std;
class Histograma{
private:
    int n;
    char c;
    int arr[100];
public:
    void addN(int _n) {n = _n;};
    void addC(char _c) {c = _c;};
    void addElemento(int pos, int ele);
    void print(int n);
};

void Histograma::addElemento(int pos, int ele){
    arr[pos] = ele;
}

void Histograma::print(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<arr[i]; j++){
            cout << c;};
        cout << "\n";}
}

int main() {
    int n;
    char c;
    Histograma h;
    cin >> n;
    int ele = 0;
    for (int i=0; i<n; i++){
        cin >> ele;
        h.addElemento(i, ele);
    }
    cin >> c;
    h.addC(c);
    h.print(n);
}
