//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Haz un programa que imprima la secuencia como en el siguiente ejemplo.

Entrada
Este problema no tiene entradas.

Salidas
Imprime la secuencia como en el ejemplo debajo.
*/

#include <iostream>
using namespace std;
int main()
{
  float cont =1;
  for(float i=0;i<2.2;)
  {
    for (float j = 0; j < 3; j++) {
      cout<<"I="<<i<<" "<<"J="<<cont+i<<endl;
      cont++;
    }
    cont=1;
    i+=0.2;
  }
  return 0;
}
