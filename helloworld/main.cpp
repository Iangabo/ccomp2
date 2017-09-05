//numeros ingresados y se halla menor mayor y prom
#include <iostream>
using namespace std;
int main()
{
int n,mayor,menor,valor;
float prom,m;
double acumula=0.0;
m=0;
cout <<"Cuantos numeros quiere ingresar: " << endl;
cin >> n;
for (int cont=0,valor; n>cont; cont =cont+1){
  cout <<"Ingrese un numero: "<< endl;
  cin>>valor;
  m+=valor;
  
  if(cont==0){
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
prom=(m)/n;
cout << "el promedio es: "<<prom;
return 0;
}


//factorial
  #include <iostream>
using namespace std;
int main()
{
  short number;
  cout << "Enter a number: " ;
  cin >> number;
  cout << "The factorial of  " << number << " is  ";
  int acumulator =1;
  for(; number > 0; acumulator *= number--);
  cout << acumulator << "./n";
  return 0;
  
}
  
/*
//Imprimir hello world el numero de veces que ingreses con while
#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  while( N-- > 0)
  {
    cout << "Hello world!/n" ;
  }
  return 0;
}
*/
//""Con do-while
#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  do {
    cout << "Hello world!/n" ;
    
  
  }while( --N > 0);
 
  return 0;
}


