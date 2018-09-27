#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int x;
    cout << "Ingresa un número: ";
    cin >> x;
    double i=0,p=0,impar=0,par=0;
    int c=0;

    while (c<x){
        c++;
        p=(pow(2,c));
        if (p>=x){
            c--;
            p=(pow(2,c));
            cout << "La mayor potencia de 2 menor o igual al número x: " << p << "\n";
        break;}}

    while (impar>=x){
        if (x%2!=0) {
            impar++;}
        if (impar>=x){
            impar--;}}

    cout << "La suma de los números impares menores a x: " << impar << "\n";


    return 0;}
    
   
    //Realizar un programa que calcule los siguientes resultados.
    //la mayor potencia de 2 menor o igual a un número N.
    //La suma de los números impares menores a N. (no salio)
    //el inverso de un factorial de N.
    //El programa debe tener las siguientes funciones.
    //para leer el valor de N.
    //una función por cada letra a), b), c) y una función que imprima los resultados.
