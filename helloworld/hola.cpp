
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
