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
  int cont =7;
  for(size_t i=1;i<=9;)
  {
    for (size_t j = 0; j < 3; j++) {
      cout<<"I="<<i<<" "<<"J="<<cont<<endl;
      cont--;
    }
    cont+=5;
    i+=2;
  }
  return 0;
}
