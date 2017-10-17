#ifndef JUGADOR_H
#define JUGADOR_H


#include <iostream>
#include <string>

using namespace std;

class equipo {
public:
    string name;
    int size;
    equipo(){
    }
    equipo(string x,int y){

        name=x;
        size=y;
    }
    void setname(string x){
        name=x;
    }
    void setsize(int y){
        size=y;
    }
    void print(){
        cout<<"El equipo es: "<<name<<endl;
    }

};


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
        int x=x+1;
        cout<<"Jugador: "<<++x<<endl;

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
