#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n, m=0, c, v, h;
    cout<<"Digite el tamanio de la matriz: ";
    cin>>n;
    m=n;
    int a[n][m];
    srand(time(nullptr));
    if (n%2==0){n += 1; m = n;}
    c = (n/2)+1;

    // matriz inicial
    cout<<"Matriz inicial:"<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j]=0;
            cout<<setw(5)<<a[i][j]<<" ";}
        cout << "\n";}
    cout << "\n";

    // matriz posicion centro
    cout<<"Matriz posicion centro:"<<endl;
    for(int i=0;i<n;i++){
        h=n-c;
        v=m-c;
        a[h][v]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    cout << "\n";

    // movimientos
    for (int k=0; h<n-2; k++)
        for (int w=0; v<m-2; w++){
        int r=rand()%4;
        cout << "Matriz movimiento "<<w+1<<":"<< endl;
        switch (r) {
            case 0: //NORTE
                for (int i = 0; i < n; i++) {
                    a[h+1][v] = 1;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                h=h+1;
                cout << "\n";
                break;

            case 1: //SUR
                for (int i = 0; i < n; i++) {
                    a[h-1][v] = 1;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                h=h-1;
                cout << "\n";
                break;

            case 2: //ESTE
                for (int i = 0; i < n; i++) {
                    a[h][v+1] = 1;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v+1;
                cout << "\n";
                break;

            case 3: //OESTE
                for (int i = 0; i < n; i++) {
                    a[h][v-1] = 1;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v-1;
                cout << "\n";
                break;
        }}

    return 0;}
