//---------***ENUNCIADO DEL PROBLEMA***---------//

/*

Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive). While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line.

Input

The input contains only integer values, ​​can be positive or negative.

Output

The output contains only an integer value.



*/

#include <iostream>

using namespace std;
int main() {
    int A, B, C,F=0;
    cin >> B >> C;
    A = 1;

    while(C <= 0)
    cin >> C;


    while(A <= C) 
    {
        F = F + B;
        B++;
        A++; 
    } 
            

	cout << F << endl;
	return 0;
}