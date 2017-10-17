#ifndef JUGADOR_H
#define JUGADOR_H


#include <iostream>
#include <string>

using namespace std;

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
