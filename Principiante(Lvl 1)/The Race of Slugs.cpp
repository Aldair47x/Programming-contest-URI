//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

The slugs racing is a sport that has grown in recent years, causing several people dedicate their lives trying to capture fast slugs, and trains them to make millions in races around the world. But the task of capturing fast slugs is not an easy task, since almost all the slugs are very slow. Each slug is classified at a level depending on their speed:


Level 1: If speed is less than 10 cm/h.
Level 2: If speed is greater than or equal to 10 cm/h and lower than 20 cm/h.
Level 3: If speed is greater than or equal to 20 cm/h.


Your task is to identify which level of speed faster slug of a group of slugs.

Input

The entry consists consists multiple test cases, and each consists of two lines: The first line contains an integer L (1 ≤ L ≤ 500) representing the number of slugs of the group, and the second line contains L integers Vi (1 ≤ Vi ≤ 50) representing the speeds of each slug.
The input ends with end of file (EOF).

Output

For each test case, output a single line with the level of speed faster slug of a group of slugs

*/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int L;
  int x;
  int cont=0;
  int New;
  while(scanf("%d",&L) != EOF)
  {
  	cont=0;
  	for(int i=0;i<L;i++)
    {
		cin>>x;
  		if(x>0&&x<=50)
  		{
           New=x;
	       if(New>cont)
	       {
	       	cont=New;
	       }
  		}	       
	}
	if(cont>0&&cont<10)
	{
		cout<<1<<endl;
	}
  	else if(cont>9&&cont<20)
  	{
  		cout<<2<<endl;
  	}
  	else if(cont>=20)
  	{
  		cout<<3<<endl;
  	}
  }
			
			
	return 0;
}