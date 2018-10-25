#include <iostream>
using namespace std;

int main() {

float *pAncho=nullptr, *pLargo=nullptr;

pAncho=new float;
pLargo=new float;

cout<<"Largo: "<<endl;
cin>>*pLargo;
cout<<"Ancho: "<<endl;
cin>>*pAncho;

cout<<"El area es "<<*pLargo**pAncho<<endl;
cout<<"El perimetro es "<<2* *pLargo + 2* *pAncho<<endl;

delete pAncho;
delete pLargo;
pAncho= nullptr;
pLargo= nullptr;

return 0;}

