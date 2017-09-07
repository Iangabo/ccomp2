
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
//Año bisieyto
#include <iostream>
using namespace std;
int main(){
      int a;
      cout<<"Ingresa anio"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El anio "<<a<<"es bisiesto ";
     }else{
         cout<<"El anio "<<a<<"no es bisiesto ";
     }
      return 0;
}
