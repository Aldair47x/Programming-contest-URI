//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Escriba un programa que imprima todos los números pares entre 1 y 100, incluir los extremos si corresponde.

Entrada

En este problema, extremadamente simple, no hay entrada.

Salida

Imprima todos los números pares entre 1 y 100, incluidos los extremos, uno por linea.

*/

#include <iostream>
 
using namespace std;
 
int main() {
 
     for(int i=2;i<=100;i=i+2)
      cout<<i<<endl;
 
    return 0;
}