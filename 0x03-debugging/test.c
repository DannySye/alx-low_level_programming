#include <stdio.h>
 
/**
*largest_number - returns the largest of 3 numbers
*@a: first integer
*@b: second integer
*@c: third integer
*Return: largest number
*/
 
 int main(void)
 {
	int largest;
	int a, b, c;
	a = 20;
	b = 19;
	c = 18;

        if (a > b && b > c)
         {
                 largest = a;
         }
         else if (b > a && a > c)
         {
                 largest = b;
         }
         else
         {
                 largest = c;
         }
 
         return (largest);
 }

