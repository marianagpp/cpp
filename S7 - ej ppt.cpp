MAIN.CPP

#include<iostream>
#include<ctime>
#include "Array.h"
using namespace std;

int main(){

    int M[nFILAS][nCOLUMNAS];
     srand (time(nullptr));
     cout<<"\n";
     LlenarArray(M,nFILAS,nCOLUMNAS);
     ImprimirArray(M,nFILAS,nCOLUMNAS);
     cout<<"\n";
     cout<<"El menor elemento almacenado en el array es "<< ElMenor(M,nFILAS,nCOLUMNAS);
     cout<<"\n";
     cout<<"La suma de la diagonal es igual a "<<SumadeDiagonal(M,nFILAS,nCOLUMNAS);
     cout<<"\n";
     cout<<"La suma de los elementos por encima de la diagonal es "<<SumaPorEncimadelaDiagonal(M,nFILAS,nCOLUMNAS);
     cout<<"\n";
     return 0;}

ARRAY.H

#ifndef UNTITLED1_ARRAY_H
#define UNTITLED1_ARRAY_H


#include <iostream>
#include <cstddef>

using namespace std;

constexpr size_t nFILAS=7, nCOLUMNAS=7;

void LlenarArray(int M[][nCOLUMNAS],size_t filas,size_t columnas);
void ImprimirArray(int M[][nCOLUMNAS],size_t filas, size_t columnas);
int ElMenor(int M[][nCOLUMNAS],size_t filas, size_t columnas);
int SumadeDiagonal(int M[][nCOLUMNAS],size_t filas, size_t columnas);
int SumaPorEncimadelaDiagonal(int M[][nCOLUMNAS],size_t filas, size_t columnas);

#endif //UNTITLED1_ARRAY_H


ARRAY.CPP


#include <cstdlib>
#include <iomanip>
#include "Array.h"

void LlenarArrat(int M[][nCOLUMNAS],size_t filas,size_t columnas){
    for(size_t f=0; f<filas; f++)
        for(size_t c=0; c<columnas; c++)
            M[f][c]=rand()%100;}

void ImprimirArray(int M[][nCOLUMNAS],size_t filas,size_t columnas){
    for(size_t f=0; f<filas; f++){
        for(size_t c=0; c<columnas; c++)
            cout <<setw(5)<<M[f][c];
        cout<<"\n";}}

int ElMenor(int M[][nCOLUMNAS],size_t filas,size_t columnas){
    int Menor;
    Menor=M[0][0];
    for(size_t f=0; f<filas; f++)
        for(size_t c=0; c<columnas; c++)
            if(M[f][c]<Menor)
                Menor=M[f][c];
    return Menor;}

int SumadeDiagonal(int M[][nCOLUMNAS],size_t filas,size_t columnas){
    int Suma=0;
    for(size_t f=0; f<filas; f++)
        Suma+=M[f][f];
    return Suma;}

int SumaPorEncimadelaDiagonal(int M[][nCOLUMNAS],size_t filas,size_t columnas){
    int Suma=0;
    for(size_t f=0; f<filas; f++)
        for(size_t c=0; c<columnas; c++)
            Suma+=M[f][c];
    return Suma;}
