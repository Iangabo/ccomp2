//numeros ingresados y se halla menor mayor y prom
#include <iostream>
using namespace std;
int main()
{
int n,mayor,menor,prom;
double acumula=0.0;
cout <<"Cuantos numeros quiere ingresar: " << endl;
cin >> n;
for (int cont=0,valor; n>cont; cont =cont+1){
  cout <<"Ingrese un numero: "<< endl;
  cin>>valor;
  if(cont==1){
    mayor=valor;
    menor= valor;
  }
  else{
    mayor=valor>mayor?valor:mayor;
    menor=valor<menor?valor:menor;
  }
}
cout << "el mayor es: "<<mayor<<endl;
cout << "el menor es: "<<menor<<endl;
prom=(mayor+menor)/2;
cout << "el promedio es: "<<prom;
