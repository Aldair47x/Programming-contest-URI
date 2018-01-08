//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Leer los cuatro valores correspondientes a las coordenadas x e y de dos puntos en el plano, p1 (x1, y1) y p2 (x2, y2) y calcular la distancia entre ellos, mostrando cuatro decimales después del punto, de acuerdo a la fórmula:

Distancia = 

Entrada

La entrada contiene dos líneas de datos, la primera contiene dos valores double: x1 y1, la segunda también contiene dos valores double con un dígito después del punto: x2 y2.

Salida

Calcular y mostrar el valor de la distancia usando la fórmula provista, con 4 dígitos después del punto.

*/

#include <math.h>
#include <stdio.h>
 
int main()
{
    double x1,x2,y1,y2,r;
    scanf("%lf %lf", &x1,&y1); 
    scanf("%lf %lf", &x2,&y2);
    r=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    printf("%.4lf\n", r);
	return 0;
}