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
