//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Richard Phillips Feynman fue un físico estadounidense muy conocido y galardonado con el Premio Nobel de Física. Trabajó en la física teórica y también fue pionero en el campo de la computación cuántica. Visitó América del Sur durante diez meses, dando conferencias y disfrutando de la vida en el clima tropial. También es conocido por sus libros "Surely You're Joking, Mr. Feynman!" y "¿What Do You Care What Other People Think?", que incluyen algunas de sus aventuras por debajo del ecuador .

Su pasatiempo a lo largo de su vida fue la resolución y creación de puzzles, cerraduras y cifrados. Recientemente, un viejo granjero en América del Sur, que fue un anfitrión del joven físico en 1949, encontró unos papeles y notas que se cree que han pertenecido a Feynman. Entre las notas sobre mesones y el electromagnetismo, había una servilleta donde escribió un rompecabezas simple: "¿cuántos cuadros diferentes hay en una cuadrícula de & nbsp ; N & nbsp ; & nbsp × N ; cuadrados? ".

En la misma servilleta había un dibujo que se reproduce a continuación, mostrando que, para N=2, la respuesta es 5.

*/

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n=1;
    while(n!=0)
    {
     cin>>n;
     if(n!=0)
     cout<<((n*(n+1)*((2*n)+1))/6)<<endl;

    }
 
    return 0;
}