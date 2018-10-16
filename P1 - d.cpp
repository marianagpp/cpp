#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n, m, c, v, h, X;
    cout<<"Digite el tamanio de la matriz: ";
    cin>>n;
    cout<<"Ingrese el numero de movimientos que desea realizar: ";
    cin>>X;
    if (n%2==0){n += 1;}
    m=n;
    c = n/2 + 1;
    int a[n][m];
    srand(time(nullptr));

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
    a[h][v]=0;
    cout << "\n";

    // matriz punto aleatorio
    cout<<"Matriz punto aleatorio:"<<endl;
    int rn=rand()%n+1;
    int rm=rand()%m+1;
    int ph, pv;
    for(int i=0;i<n;i++){
        ph=n-rn;
        pv=m-rm;
        a[ph][pv]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    cout << "\n";


    // movimientos
        for (int w=1; w<X+1; w++){ // menor que movimientos
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

cout<<"El porcentaje de veces que la secuencia toca un borde o el punto es "<<X<<endl;

    return 0;}

//La matriz es de dimensiones impar.
//La posicion de partida es el centro de la matriz.
//Se genera un numero aleatorio dentro de la matriz.
//Se ingresa un numero X por el numero de movimientos a realizar la particula.
//Las siguientes posiciones son aleatorias, ya sean norte, sur, este u oeste.
//Termina la secuencia cuando el ultimo valor se encuentra en un borde de la matriz o alcanza al punto aleatorio.
//Mostrar el porcentaje de veces que la particula toca los bordes o el punto aleatorio dentro de la matriz.
