#include <iostream>
//#include <iomanip>
//#include <math.h>
//#include <ctime>
//#include "Array.h"
using namespace std;

int main() {

double *pnumero1=nullptr, *pnumero2=nullptr;

pnumero1=new double;
pnumero2=new double;

cout<<"Número 1: "<<endl;
cin>>*pnumero1;
cout<<"Número 2: "<<endl;
cin>>*pnumero2;

cout<<"La suma es "<<*pnumero1+*pnumero2<<endl;
cout<<"La diferencia es "<<*pnumero1-*pnumero2<<endl;
cout<<"El producto es "<<*pnumero1**pnumero2<<endl;

delete pnumero1;
delete pnumero2;

return 0;}

