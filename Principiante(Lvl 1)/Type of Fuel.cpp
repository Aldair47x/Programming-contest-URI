//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.

Input

The input contains only integer and positive values.

Output

It should be written the message: "MUITO OBRIGADO" and the amount of customers who fueled each fuel type, as an example.

*/

#include <iostream>

using namespace std;

int main()
{
    int a1=0,g1=0,d1=0,e=0;
    while(e!=4)
    {
    	cin>>e;
    	if(e==1)
    		a1++;
    	if(e==2)
    		g1++;
    	if(e==3)
    		d1++;
    }

    cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<a1<<endl;
	cout<<"Gasolina: "<<g1<<endl;
	cout<<"Diesel: "<<d1<<endl;


	return 0;
}