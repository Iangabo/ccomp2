
/*
Implemente un programa en C++ que contenga una clase que represente un Empleado, registrando su nombre, salario y fecha de ingreso(usar la clase Fecha creada anteriormente). Cree tambien una clase que represente una empresa, registrando su nombre y RUC. Investigue y cree un tipo ENUM en el cual debe considerar "Logistica", "Almacen" y "Recursos Humanos". En todas las clases debe definir los atributos como privados y crear métodos para acceder y modificar dichos atributos. Finalmente, en la función principal, el programa debe considerar lo siguiente:
- Crear una empresa;
- Adicionar a la empresa algunos empleados(debe solicitar al inicio cuantos)
- Dar un aumento del 10% a todos los empleados de un determinado departamento.
*/



#ifndef EMPLEADO_H
#define EMPLEADO_H


#include<iostream>
#include<string>
using namespace std;


class Empresa
{
public:
    string name;
    int size;
    Empresa(){
    }
    Empresa(string a,int b){

        a=name;
        b=size;

    }
    void setname(string a){
         a=name;
    }
    void setsize(int b){
         b=size;

    }
    void print(){
        cout<<"La Empresa es: "<<name<<endl;
    }
};

class Empleado
{
    public:
        string nombre;
        class FECHA;
        int salario;
        Empleado(){
        }
        Empleado(string x, string y, int z){
            x=nombre;
            y=FECHA;
            z=salario;
        }
    void setnombre(string x){
         x=nombre;
    }
    void setfecha(string y){
         y=fecha;
    }
    void setsalario(int z){
         z=salario;

    }
    void print(){
        cout<<"El Empleado es: "<<nombre<<endl;
        cout<<"Su Fecha de ingreso es: "<<fecha<<endl;
        cout<<"Y por ultimo su salario es: "<<salario<<endl;
        int w,e,r;
        cout<<"Ingrese un Empleado, su nombre, su fecha y por ultimo su salario respectivamente"<<endl;
        cin<<w;
        cin<<e;
        cin<<r;

    }

};

#endif // EMPLEADO_H
 class 2
 
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
