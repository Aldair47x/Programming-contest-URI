//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Cansada de tener que lavar tu ropa sucia, tu madre decidió que a partir de ahora serás tú quien haga ese trabajo.

En el lavadero de tu casa hay un lavarropas y un secarropas, cada uno con un límite mínimo y máximo de prendas a ser lavadas o secadas por vez. De este modo, el lavarropas sólo se puede usar si se colocaron como mínimo LA y como máximo LB prendas dentro de él y, de la misma forma, el secarropas sólo puede ser usado si se colocan como mínimo SA y como máximo SB prendas dentro de él.

Tienes N prendas que tienen que ser lavadas y secadas, y quieres saber si puedes hacer esto en tu lavadero, siguiendo las reglas descriptas.

Entrada

En la primera línea de entrada hay un entero N (1 ≤ N ≤ 100).

En la segunda línea de entrada hay dos enteros LA y LB (1 ≤ LA < LB ≤ 100).

En la tercera línea de entrada hay dos enteros SA y SB (1 ≤ SA < SB ≤ 100).

Salida

Imprima "possivel" en caso de que sea posible hacer el trabajo, "impossivel" en caso contrario.

*/

#include <iostream>

using namespace std;

bool lavar(int x, int y, int n)
{
 if((x<=n)&&(n<=y))
  return true;
 else
  return false;
}

int main() {
  int N,LA,LB,SA,SB;
  cin>>N;
  cin>>LA>>LB;
  cin>>SA>>SB;
  if((1>N<100)&&(1>LA<100)&&(1>LB<100)&&(1>SA<100)&&(1>SB<100))
  {
   if((lavar(LA,LB,N)==true)&&(lavar(SA,SB,N)==true))
   {
     cout<<"possivel"<<endl;
    }
   else
    {
    cout<<"impossivel"<<endl;
    }

   }



    return 0;
}