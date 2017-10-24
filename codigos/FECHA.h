#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>

using namespace std;

class FECHA
{
    public:
        string mes;
        int dia,anio;


        FECHA(){

        }
        FECHA(string z,int x,int y){
            dia=x;
            anio=y;
            mes=z;
        }
        void setdia(int x){
            dia=x;
        }
        void setanio(int y){
            anio=y;
        }
        void setmes(string z){
            mes=z;
        }
        void print(){


            cout<<"El mes es: "<<mes<<endl;
            cout<<"El dia es: "<<dia<<endl;
            cout<<"El anio es: "<<anio<<endl;

           // while(anio<2030){
                //cout<<"El anio es: "<<anio++<<endl;


            if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
                 cout<<"El anio "<<anio<<" es bisiesto "<<endl;
            }
            else{
                 cout<<"El anio "<<anio<<" no es bisiesto "<<endl;
             }

        }



        };




#endif
