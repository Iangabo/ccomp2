//class
#ifndef JUGADOR_H
#define JUGADOR_H
#ifndef EQUIPO_H

#include <iostream>
#include <string>

using namespace std;

class equipo{
public:
    string name,class jugador;
    };
    equipo(){
        equipo(string x,class y){
            name= string x;
            jugadores=class y;

        }
    }

class jugador {
  public:
    string nombre,posicion;
    int num, agresividad;

    jugador() {
    }
    jugador (string x,string y, int z, int w){

      nombre=x;
      posicion=y;
      num=z;
      agresividad=w;
    }
    void setagresividad(int x){
      agresividad=x;
    }
    void setnumero(int z){
      num=z;
    }
    void setposicion(string w){
      posicion=w;
    }
    void setnombre(string y){
      nombre=y;
    }
    void print (){
        if (agresividad>5){
            cout <<"El jugador esta agresivo!!,dejalo jugar!"<<endl;
        }
        else{
            cout <<"El jugador esta calmado, cambialo"<<endl;
        }
        cout <<"El nombre del jugador es: "<<nombre<<endl;
        cout <<"La posicion del jugador es: "<<posicion<<endl;
        cout <<"El numero del jugador es: "<<num<<endl;
    }
};


#endif

//main

#include <iostream>
#include "jugador.h"
#include "equipo.h"


using namespace std;

int main()
{
    equipo Borussia Dortmund=("Borussia Dortmund",jugador);
    Borussia Dortmund.print();

    jugador Reus("Reus", "Delantero", 11, 8);
    Reus.print();
    jugador Abameyang("Abameyang", "Delantero centro", 17, 8);
    Abameyang.print();
    jugador Dembele("Dembele", "Medio Campista", 11, 9);
    Dembele.print();
    jugador Kagawa("Kagawa", "Medio Campista", 23, 7);
    Kagawa.print();
    jugador Burki("Burki", "Portero", 1, 5);
    Burki.print();
    jugador Sokratis("  Sokratis", "Defensa", 25, 5);
    Sokratis.print();
    jugador Bartra("Bartra", "Defensa", 5, 6);
    Bartra.print();
    jugador Subotic("Subotic", "Defensa", 4, 4);
    Subotic.print();
    jugador Gotze("Gotze", "Delantero", 10, 9);
    Gotze.print();
    jugador Castro("Castro", "Defensa", 27, 4);
    Castro.print();
    jugador Rode("Rode", "Volante", 18, 5);
    Rode.print();
    jugador Shurrle("Shurrle", "Extremo Izquierdo", 21, 7);
    Shurrle.print();

    equipo Bayern Munich=("Bayern Munich",jugador);
    Bayern Munich.print();

    jugador Never =("Neuer";"arquero";1;3);
    Never.print();
    jugador Gotze=("Gotze";"defensa";20;6);
    Gotze.print();
    jugador Hummels=("Hummels";"defensa";5;5);
    Hummels.print();
    jugador Rafinha=("Rafinha";"defensa";13;6);
    Rafinha.print();
    jugador Ribery=("Ribéry";"centrocampista";7;3);
    Ribery.print();
    jugador Xabi=("Xabi";"centrocampista";14;6);
    Xabi.print();
    jugador Kimmich=("Kimmich";"centrocampista";32;8);
    Kimmich.print();
    jugador Lewandowski=("Lewandowski";"delantero";9;9);
    Lewandowski.print();
    jugador Müller=("Müller";"delantero";25;8);
    Müller.print();
    jugador Robben =("Robben";"delantero";10;7);
    Robben.print();
    jugador=("Lahm";"ccentrocampista";21;6);
    Lahm.print();


	return 0;
}


Ejercicios del control
/*1. 1.	Implementar un programa que imprima el contenido de un arreglo de dos dimensiones de forma espiral
Por ejemplo, suponga que el arreglo contiene los siguientes valores:
1  2  3  4  5  6
7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24

La salida de su programa debe ser:
	1 2 3 4 5 6 12 18 24 23 22 21 20 19 13 7 8 9 10 11 17 16 15 14
*/

#include <iostream>
using namespace std;
int main(){
  int i, j,;
while (num!=max){
    for (i=tope,j=tope; j<= ene; j++){
        num++;
        meterEnVector(); }
    for (i=tope+1, j=ene; i<=eme; i++){
        num++;
        meterEnVector(); // definila
    }
    for (i=eme, j=ene-1;j>=tope; j
        num++;
        meterEnVector(); // 
    }
    for (i=eme-1, j=tope; i>tope; i--) 
        num++;
        meterEnVector(); 
}

//1.	Implemente una función recursiva que reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos del arreglo.
#include <iostream>
using namespace std;
int main(){
  int sum=0;
  int array[5];
  array[0]=1;
  array[1]=2;
  array[2]=3;
  array[3]=4;
  array[4]=5;
  for (int a=0;a<5;a++){
    sum=sum+array[a];
  }
  cout << sum <<endl;
  return 0;
  
}

//2.	Implemente una función que reciba un arreglo de enteros y su tamaño e invierta los elementos de dicho arreglo.
//Antes: [1 ,2, 3, 4, 5]
	//Después: [5, 4, 3, 2, 1]
	
#include <iostream>
using namespace std;
int main(){
  int array[5],tam = 5,x=0,aux;
  array[0]=1;
  array[1]=2;
  array[2]=3;
  array[3]=4;
  array[4]=5;
  while((tam-x)/2 > x){
    aux=array[x];
    array[x]=array[tam-1-x];
    array[tam-1-x]=aux;
    x++;
  }
  for(x=0;x<tam;x++)
  cout<<array[x]<<endl;

//3.	Implemente la función de la pregunta anterior en su versión recursiva.
#include <iostream>
using namespace std;
int main(){
  
}

/*4.	Implemente un programa que imprima la siguiente cadena de la forma mostrada como sigue:
Hola,
	Voy a terminar mis tareas!
	Cerraré el Facebook y WhatsApp!
Bye,

La salida del programa debe ser como sigue:
Bye,
       	Cerraré el Facebook y WhatsApp!
	Voy a terminar mis tareas!
Hola,

*/
#include <iostream>
using namespace std;
int main(){
  void array[4],x=0,aux;
  array[0]=Hola;
  array[1]=Voy a terminar mis tareas!;
  array[2]=Cerraré el Facebook y WhatsApp!;
  array[3]=Bye;
  while((4-x)>x){
    aux=array[x];
    array[x]=array[4-x];
    array[4-x]=aux;
    x=x+1;
    

    
  }
  for(x=0;x<10;x++)
  cout<<array[x]<<endl;
 
}






/numero primo

#include <iostream>

using namespace std;

int main(){


    int x;
    cout <<"Ingrese un numero"<< endl ;
    cin >> x;
        if(x%2!=0 || x%3!=0 || x%5!=0 || x%7!=0 ){
            cout <<"Si es primo" << endl ;
        }else{
            cout <<"No es primo" << endl ;
    }return 0;
}


/*
saber si el año es bisiesto o no
#include <iostream>
using namespace std;
int main(){
      int a;
      cout<<"Ingresa anio"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0){
         cout<<"El anio "<<a<<"es bisiesto ";
     }else{
         cout<<"El anio "<<a<<"no es bisiesto ";
     }return 0;
}
*/


