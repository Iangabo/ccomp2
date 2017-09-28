//Project Euler
//Si enumeramos todos los números naturales por debajo de 10 que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23.

//Calcula la suma de todos los múltiplos de 3 o 5 por debajo de 1000.
#include <iostream>
using namespace std;
 
int main()
{
	int sum = 0;
	int n = 1000;
 
	for(int i = 0; i < n; i++)
	{
		if(3*i < n)
			sum += 3*i;
		if(5*i < n && (5*i) % 3 != 0)
			sum += 5*i;
	}
	cout << "Sum: " << sum << endl;
}

//Cada nuevo término en la secuencia de Fibonacci se genera sumando los dos términos anteriores. Comenzando con 1 y 2, los primeros 10 términos serán:

//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

//Considerando los términos en la secuencia de Fibonacci cuyos valores no exceden los cuatro millones, encuentre la suma de los términos pares.
#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    cout<<" FIBONACCI "<<endl;
    
    int i, num ;
    
    do
    {
        cout<<"Ingrese un numero entero y positivo: ";
        cin>>num;
        
    } while(num < 0);
    
    cout<<"\nLa serie es: \n\n\t";
    
    for(i=0; i<num; i++)
    {
       if(fibo(i) != 0)
          cout<< ", "; 
        
        cout<< fibo(i);       
    }
    
    
    
    return 0;
}



//Los factores primos de 13195 son 5, 7, 13 y 29.

//¿Cuál es el factor primo más grande del número 600851475143?
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int i, resultado;
    long long int MAX = 600851475143;
    int num;
 
    for( i = 2; i < MAX; i++)
    {
       if(MAX % i == 0)
       {
           MAX /= i;
           i = 2;
        }
    }
 
    printf("El maximo factor primo de 600851475143 es %d\n\n", MAX );
 
   
    return 0;
}
 
 














#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
/la posicion de un numero primo
#include<iostream>
using namespace std;

int main()
{
  int num,n,p,i;
  cout<<"Ingresa un numero";
  cin>>num;
  n=2;
  i=0;
  while (i<=num)
  { for (p=2;n%p!=0;p=p+1);
  if(p==n)
  {i=i+1;
   if(i==num)
   cout<<n<<endl;
}
n=n+1;
}
return 0;
}
//Año bisiesto
#include <iostream>
using namespace std;

bool esbiciesto(int a){
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
        return true;
     }else{
        return false;
     }
}

int main(){
  int n;
 cout<<"Ingresa anio"<<endl;
 cin >> n;
 if (esbiciesto(n)){
   cout <<"si lo es";
   
 }
 else{
   cout << "no lo es";
 }
 return 0;
}
