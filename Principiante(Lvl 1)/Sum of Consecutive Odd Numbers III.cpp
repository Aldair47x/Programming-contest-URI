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
 
using namespace std;
 
bool par(int x)
{
 if (x%2==0)
  return true;
 else
  return false;

}

void odd(int x, int y)
{
 int sum;
 if(par(x)==true)
 {
  x++;
  sum=x;
  for(int i=0;i<y-1;i++)
  {
   x=x+2;
   sum=sum+x;
  }
 }
 else
 {
  sum=x;
  for(int i=0;i<y-1;i++)
  {
   x=x+2;
   sum=sum+x;
  }
 }
 cout<<sum;
}

int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  int x,y;
  cin>>x>>y;
  odd(x,y);
  cout<<endl;
 }

  return 0;
}