//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.

Input

The input will be a positive integer value.

Output

The output will be a sequence of six odd numbers

*/
#include<iostream>

using namespace std;

bool par(int x)
{
 if(x%2==0)
 {
  return true;
 }
 else
  return false;
}
int main()
{
 int x;
 cin>>x;
 if(par(x)==true)
 {
  x++;
 }
 for(int i=0;i<=5;i++)
 {
  cout<<x<<endl;
  x=x+2;
  }
 return 0;
}