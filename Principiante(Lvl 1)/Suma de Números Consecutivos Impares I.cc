//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Lea dos valores enteros X e Y. Imprima la suma de los valores impares entre ellos.

Entrada

El archivo de entrada contiene dos valores enteros.

Salida

El programa debe imprimir un número entero. Este número es la suma de todos los valores impares entre los valores de entrada y esta suma es también un número entero.


*/

#include <iostream>

using namespace std;

bool par(int x)
{
 if(x%2==0)
  return true;
 else return false;
}

bool menor(int x, int y)
{
 if(x<y)
  return true;
 else
  return false;
}


int main()
{

 int x,y,sum=0,x1,x2;
 cin>>x;
 cin>>y;
 if(menor(x,y)==true)
 {
   x1=x;
   x2=y;
 }
 else
 {
  x1=y;
  x2=x;
 }


 if((par(x)&&(par(y))==true))
 {
  x1++;
  x2--;
  while(x1<=x2)
  {
   sum=sum+x1;
   x1=x1+2;

  }
 }

 else if((par(x1)==true)&& (par(x2)==false))
 {
  x1++;
  while(x1<x2)
  {
   sum=sum+x1;
   x1=x1+2;
  }
 }

 else if((par(x2)==true)&& (par(x1)==false))
 {
  x2--;
  while(x1<x2)
  {
   x1=x1+2;
   sum=sum+x1;
  }
 }

 else
 {
  while(x1<x2)
  {
   sum=sum+x1;
   x1=x1+2;

  }
 }

 cout<<sum<<endl;

 return 0;
}