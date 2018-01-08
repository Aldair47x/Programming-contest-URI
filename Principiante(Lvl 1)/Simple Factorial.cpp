//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Input

The input contains an integer value N (0 < N < 13).

Output

The output contains an integer value corresponding to the factorial of N.
*/

#include <iostream>
 
using namespace std;

long int fac(int x)
{
 if(x==0)
  return 1;
 else
  return x*fac(x-1);
}
 
int main() {
 
 int n;
 cin>>n;

 if(n>=0&&n<=13)
 {
  cout<<fac(n)<<endl;
 }
 
    return 0;
}