//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

Input

There is no input in this problem.

Output

The output contains a value corresponding to the value of S.
The value should be printed with two digits after the decimal point.

*/

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
  int b=1;
  float x=0.00;
  for(int i=0;i<19;i++)
  {
    x=x+(b+i)/(pow(2,i));
    b++;
  }
  printf("%.2f\n",x);
	return 0;
}