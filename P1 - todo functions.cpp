MAIN.CPP

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Array.h"
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

if (s==0){
    matrizinicial();
    posicioncentro();
    endbordes();}
if (s==1){
    matrizinicialpar();
    posicioncentro();
    endbordes();}
if (s==2){
    matrizinicial();
    posicionaleatoria();
    endbordes();}
if (s==3){
    tres();}
if (s==4){
    cuatro();}

    return 0;}
    
    
ARRAY.CPP

#include <cstdlib>
#include <iomanip>
#include "Array.h"

int n, m, h, v, c, w, pv, ph, x;
int a[100][100];

void matrizinicial(){
    //int n, m, c;
    cout<<"Digite el tamanio de la matriz: ";
    cin>>n;
    if (n%2==0){n += 1;}
    m=n;
    int a[n][m];
    srand(time(nullptr));
    c = (n/2)+1;}

void matrizinicialpar(){
    //int n, m, c;
    cout<<"Digite el tamanio de la matriz: ";
    cin>>n;
    if (n%2==0){c = (n/2);}
    else if (n%2!=0){c = (n/2)+1;}
    m=n;
    //int a[n][m];
    srand(time(nullptr));}

void posicioncentro(){
    //int n, m, c, h, v;
    //int a[n][m];
    cout<<"Matriz posicion centro:"<<endl;
    for(int i=0;i<n;i++){
        h=n-c;
        v=m-c;
        a[h][v]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    a[h][v]=0;
    cout << "\n";}

void posicionaleatoria(){
    //int n, m, h, v;
    //int a[n][m];
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
    cout << "\n";}

void puntoaleatorio(){
    //int n, m;
    //int a[n][m];
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
    cout << "\n";}

void endpunto(){
    //int n, m, h, v, w, pv, ph;
    //int a[n][m];
    int w=0;
    while (h>=0 && v>=0 && h<n && v<m){
        w++;
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
                if (h==ph && v==pv)
                    return;
                cout << "\n";
                break;

            case 1: //SUR
                for (int i = 0; i < n; i++) {
                    a[h-1][v] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                h=h-1;
                if (h==ph && v==pv)
                    return;
                cout << "\n";
                break;

            case 2: //ESTE
                for (int i = 0; i < n; i++) {
                    a[h][v+1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v+1;
                if (h==ph && v==pv)
                    return;
                cout << "\n";
                break;

            case 3: //OESTE
                for (int i = 0; i < n; i++) {
                    a[h][v-1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v-1;
                if (h==ph && v==pv)
                    return;
                cout << "\n";
                break;}}
    int P=w;
    cout<<"La distancia recorrida por la particula antes de tocar un borde o el punto aleatorio, es: "<<w<<endl;}

void endbordes(){
    //int n, m, h, v, w;
    //int a[n][m];
    int w=0;
    while (h>=0 && v>=0 && h<n && v<m){
        w++;
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
                break;}}
    cout<<"La distancia recorrida por la particula antes de tocar un borde es "<<w-1<<endl;}

void endnum(){
    //int n, m, h, v, w, pv, ph;
    //int a[n][m];
    int P=0;
    w=1;
    while (w<=x){
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
                w++;
                if (h>=0 || v>=0 || h<n || v<m)
                    P++;
                if (h==ph && v==pv)
                    P++;
                cout << "\n";
                break;

            case 1: //SUR
                for (int i = 0; i < n; i++) {
                    a[h-1][v] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                h=h-1;
                w++;
                if (h>=0 || v>=0 || h<n || v<m)
                    P++;
                if (h==ph && v==pv)
                    P++;
                cout << "\n";
                break;

            case 2: //ESTE
                for (int i = 0; i < n; i++) {
                    a[h][v+1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v+1;
                w++;
                if (h>=0 || v>=0 || h<n || v<m)
                    P++;
                if (h==ph && v==pv)
                    P++;
                cout << "\n";
                break;

            case 3: //OESTE
                for (int i = 0; i < n; i++) {
                    a[h][v-1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                v=v-1;
                w++;
                if (h>=0 || v>=0 || h<n || v<m)
                    P++;
                if (h==ph && v==pv)
                    P++;
                cout << "\n";
                break;}}
    cout<<"El numero de veces que la particula toca algun borde o el punto aleatorio es: "<<P<<endl;}

void tres(){
    int n, m, c, v, h;
    cout<<"Digite el tamaño de la matriz: ";
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
    // matriz punto aleatorio
    cout<<"Matriz punto aleatorio:"<<endl;
    int rn=rand()%n+1;
    int rm=rand()%m+1;
    int ph,pv;
    for(int i=0;i<n;i++){
        ph=n-rn;
        pv=m-rm;
        a[ph][pv]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    cout << "\n";

    // movimientos
    //for (int k=0; h-1<ph || v-1<pv; k++) // si toca punto??
    int w=0;
    while (h>=0 && v>=0 && h<n && v<m){
        w++;
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
                break;}}
    cout<<"La distancia recorrida por la particula antes de tocar un borde es "<<w-1<<endl;}

void cuatro(){
    int n, m, c, v, h;
    cout<<"Digite el tamaño de la matriz: ";
    cin>>n;
    if (n%2==0){n += 1;}
    m=n;
    int a[n][m];
    srand(time(nullptr));
    c = (n/2)+1;

    float x,P=0;
    cout<<"Ingresa la cantidad de movimientos que desea realizar: ";
    cin>>x;

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
    int ph,pv;
    for(int i=0;i<n;i++){
        ph=n-rn;
        pv=m-rm;
        a[ph][pv]=1;
        for(int j=0;j<m;j++){
            cout<< setw(5) << a[i][j] <<" ";}
        cout<<"\n";}
    cout << "\n";

    // movimientos
    //for (int k=0; h-1<ph || v-1<pv; k++) // si toca punto??
    int w=0;
    while (w<x){
        w++;
        int r=rand()%4;
        cout << "Matriz movimiento "<<w<<":"<< endl;
        switch (r) {
            case 0: //NORTE
                for (int i = 0; i < n; i++) {
                    a[h+1][v] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                if (h==0 && v==0 && h==n && v==m)
                    P++;
                else if (h==ph && v==pv)
                    P++;
                h=h+1;
                cout << "\n";
                break;

            case 1: //SUR
                for (int i = 0; i < n; i++) {
                    a[h-1][v] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                if (h==0 && v==0 && h==n && v==m)
                    P++;
                else if (h==ph && v==pv)
                    P++;
                h=h-1;
                cout << "\n";
                break;

            case 2: //ESTE
                for (int i = 0; i < n; i++) {
                    a[h][v+1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                if (h==0 && v==0 && h==n && v==m)
                    P++;
                else if (h==ph && v==pv)
                    P++;
                v=v+1;
                cout << "\n";
                break;

            case 3: //OESTE
                for (int i = 0; i < n; i++) {
                    a[h][v-1] = w;
                    for (int j = 0; j < m; j++) {
                        cout << setw(5) << a[i][j] << " ";}
                    cout << "\n";}
                if (h==0 && v==0 && h==n && v==m)
                    P++;
                else if (h==ph && v==pv)
                    P++;
                v=v-1;
                cout << "\n";
                break;}}
    cout<<"La distancia recorrida por la particula es "<<w<<endl;
    cout<<"El porcantaje de veces que la particula toca un borde o el punto aleatorio es "<<(P/x)*100<<"%."<<endl;}

ARRAY.H

#ifndef UNTITLED_ARRAY_H
#define UNTITLED_ARRAY_H

#include <iostream>
#include <cstddef>

using namespace std;

void matrizinicial(); // crea una matriz siempre impar

void matrizinicialpar(); // crea una matriz par o impar

void posicioncentro(); // inicia la secuencia en el centro de la matriz

void posicionaleatoria(); // inicia la secuencia en una posicion aleatoria

void puntoaleatorio(); // se crea un punto aleatorio dentro de la matriz

void endpunto(); // termina la secuencia cuando toca el punto aleatorio o un borde

void endbordes(); // termina la secuencia solo cuando toca algun borde

void endnum(); // termina la secuencia cuando cumple el numero ingresado de movimientos

void tres(); // codigo completo del case 3

void cuatro(); // codigo completo del case 4

#endif //UNTITLED_ARRAY_H
