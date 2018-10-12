#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n, m, c, v, h;
    cout<<"Digite el tamanio de la matriz: ";
    cin>>n;
    if (n%2==0){n += 1;}
    m=n;
    int a[n][m];
    srand(time(nullptr));
    c = (n/2)+1;

    // matriz inicial
    cout<<"Matriz inicial:"<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j]=0;
            cout<<setw(5)<<a[i][j]<<" ";}
        cout << "\n";}
    cout << "\n";

    // matriz posicion aleatoria
    cout<<"Matriz posicion aleatoria:"<<endl;
    int rn=rand()%n+1;
    int rm=rand()%m+1;
    for(int i=0;i<n;i++){
        h=n-rn;
        v=m-rm;
        a[h][v]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    a[h][v]=0;
    cout << "\n";

    // movimientos
    for (int k=0; v<m-1; k++)
        for (int w=1; h<n-1; w++){
            int r=rand()%4;
            cout << "Matriz movimiento "<<w<<":"<< endl;
            switch (r) {
                case 0: //NORTE
                    for (int i = 0; i < n; i++) {
                        a[h+1][v] = w;
                        for (int j = 0; j < m; j++) {
                            cout << setw(5) << a[i][j] << " ";}
                        cout << "\n";}
                    h=h+1;
                    cout << "\n";
                    break;

                case 1: //SUR
                    for (int i = 0; i < n; i++) {
                        a[h-1][v] = w;
                        for (int j = 0; j < m; j++) {
                            cout << setw(5) << a[i][j] << " ";}
                        cout << "\n";}
                    h=h-1;
                    cout << "\n";
                    break;

                case 2: //ESTE
                    for (int i = 0; i < n; i++) {
                        a[h][v+1] = w;
                        for (int j = 0; j < m; j++) {
                            cout << setw(5) << a[i][j] << " ";}
                        cout << "\n";}
                    v=v+1;
                    cout << "\n";
                    break;

                case 3: //OESTE
                    for (int i = 0; i < n; i++) {
                        a[h][v-1] = w;
                        for (int j = 0; j < m; j++) {
                            cout << setw(5) << a[i][j] << " ";}
                        cout << "\n";}
                    v=v-1;
                    cout << "\n";
                    break;
            }}

    return 0;}

//La matriz es de dimensiones impar.
//La posicion de partida es es un punto aleatorio dentro de la matriz.
//Las siguientes posiciones son aleatorias, ya sean norte, sur, este u oeste.
//Termina la secuencia cuando el ultimo valor se encuentra en un borde de la matriz.
