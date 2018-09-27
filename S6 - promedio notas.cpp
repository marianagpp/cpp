MisFunciones.h

// Created by Maria Hilda Bermejo on 9/11/18.
// MisFunciones.h

#ifndef PROMEDIOS_MISFUNCIONES_H
#define PROMEDIOS_MISFUNCIONES_H

typedef float aliasdeTipo;  //-- se define un alias para el tipo de dato del array

void LeeNotas(aliasdeTipo Notas[], unsigned int n);
aliasdeTipo CalcularPromedio(aliasdeTipo Notas[],unsigned int n);
void ImprimirNotasMayoresAlPromedio(aliasdeTipo Notas[],unsigned int n, aliasdeTipo Promedio);
aliasdeTipo HallalaMenorNota(aliasdeTipo Notas[], unsigned int n);
aliasdeTipo PromedioEliminadolaMenorNota(aliasdeTipo Notas[],unsigned int n, aliasdeTipo MenorNota);

#endif //PROMEDIOS_MISFUNCIONES_H

MisFunciones.cpp

#include <iostream>
#include "MisFunciones.h"

using namespace std;

void LeeNotas(float Notas[], unsigned int n)
{
    for (int i=0; i<n; i++) {
        cout << "Ingrese nota numero " << i+1 << ": ";
        cin>>Notas[1];}
}

float CalcularPromedio(float Notas[],unsigned int n)
{
    float Suma=0;
    for (int i=0;i<n;i++){
        Suma+= Notas[i];
        return (Suma/n);
    }
}

void ImprimirNotasMayoresAlPromedio(float Notas[],unsigned int n, float Promedio)
{
    cout<<"\nNotas mayores al promedio\n";
    for (int i=0;i<n;i++){
        if (Notas[i]>Promedio){
            cout<<Notas[i]<<"\n";
        }
    }
}

float HallalaMenorNota(float Notas[], unsigned int n)
{
float menorNota;
    menorNota=Notas[0];
    for (int i=0;i<n;i++){
       if (Notas[i]<menorNota){
           menorNota=Notas[i];
           return menorNota;
       }
    }
}

float PromedioEliminadolaMenorNota(float Notas[],unsigned int n, float menorNota)
{
    float Suma=0;
    for (int i=0;i<n;i++){
        Suma+=Notas[i];
        return ((Suma-menorNota)/(n-1));
    }
}

main.cpp

#include <iostream>
#include "MisFunciones.h"
using namespace std;

const int MAX=100;

int main()
{
    aliasdeTipo Notas[MAX];
    aliasdeTipo Promedio, MenorNota,NuevoPromedio;
    unsigned int numdeNotas;

    do{
        cout<<"Numero de notas maximo 100 : ";
        cin>>numdeNotas;
    }while(numdeNotas<5);  //-- por lo menos leera 5 notas

    LeeNotas(Notas, numdeNotas);
    Promedio = CalcularPromedio(Notas, numdeNotas);
    cout << "Promedio = " << Promedio << "\n";
    ImprimirNotasMayoresAlPromedio(Notas, numdeNotas, Promedio);
    MenorNota = HallalaMenorNota(Notas, numdeNotas);
    NuevoPromedio = PromedioEliminadolaMenorNota(Notas, numdeNotas, MenorNota);
    cout << "Promedio eliminando la menor nota = " << NuevoPromedio;
    return 0;
}



////////////////////////////////////
