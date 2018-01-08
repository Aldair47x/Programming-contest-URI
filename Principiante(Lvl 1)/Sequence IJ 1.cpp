//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Make a program that prints the sequence like the following example.

Input

This problem doesn't have input.

Output

Print the sequence like the example below.

*/

#include<iostream>

using namespace std;

int main()
{
 int I=1;
 int J=60;
 for(int x=0;x<=12;x++)
 {
  cout<<"I="<<I<<" "<<"J="<<J<<"\n";
  I=I+3;
  J=J-5;
 }

 return 0;
}
