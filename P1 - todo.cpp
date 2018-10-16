#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
//0.
    //Movimiento aleatorio de una particula.
    //        Matrices de tamaño impar.
    //        Empieza en el centro.
    //        Termina cuando la particula toca un borde.
//1.
    //Calcular la distancia recorrida por la particula.
    //        Matrices de tamaño par o impar.
    //        Empieza en el centro (o equidistante al centro).
    //Termina cuando la particula toca un borde.
//2.
    //Calcular la distancia recorrida por la particula.
    //        Matrices de tamaño impar.
    //        Empieza en una posicion aleatoria.
    //        Termina cuando la particula toca un borde.
//3.
    //Se genera un punto aleatorio dentro de la matriz.
    //        Empieza en el centro.
    //        Termina si la particula alcanza el punto aleatorio o un borde.
//4.
    //Mostrar el porcentaje de veces que la particula toca un punto aleatorio o un borde.
    //        Se pide una cantidad de movimientos.
    //        Empieza en el centro.
    //        Termina cuando se cumple la cantidad de movimientos dados.
    
int s;
cout<<"Ingrese el numero de ejercicio (0 al 4): ";
cin>>s;
switch (s) {
    case 0: {
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
                break;}
    case 1:{
        int n, m, c, v, h;
        cout<<"Digite el tamanio de la matriz: ";
        cin>>n;
        if (n%2==0){c = (n/2);}
        else if (n%2!=0){c = (n/2)+1;}
        m=n;
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

        // movimientos
        int w;
        for (int k=0; v<m-1; k++)
            for (w=1; h<n-1; w++){
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
        cout<<"La distancia recorrida por la particula antes de tocar un borde es "<<w<<endl;
            break;}

    case 2: {
        int n, m, c, v, h, w;
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
            for (w=1; h<n-1; w++){
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
        cout<<"La distancia recorrida por la particula antes de tocar un borde es "<<w<<endl;
            break;}

    case 3: {
        int n, m, c, v, h, X;
        cout<<"Digite el tamanio de la matriz: ";
        cin>>n;
        if (n%2==0){n += 1;}
        m=n;
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

        // matriz punto aleatorio
        cout<<"Matriz punto aleatorio:"<<endl;
        rn=rand()%n+1;
        rm=rand()%m+1;
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
        for (int k=0; h-1<ph || v-1<pv; k++) // si toca punto
            for (int w=1; h<n || v<m; w++){ // si toca borde
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
        cout<<"La particula ha alcanzado un borde o el punto aleatorio."<<endl;
            break;}

    case 4: {
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
        int w;
        for (w=1; w<X+1; w++){ // menor que movimientos
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
        int P=w%100; // w no es
        cout<<"El porcentaje de veces que la secuencia toca un borde o el punto es "<<P<< "%" <<endl;
        break;}





}
    return 0;}



