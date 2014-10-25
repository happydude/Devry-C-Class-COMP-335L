/*                                                Jason J. Davis
                                                  COMP-335L
                                                  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ___07/17/1997___                         Due:

#include <conio.h>
*/
#include <stdio.h>


int main()
{
double ctemp,ftemp,result;

 printf("This program will convert a Celsius temperature\n");
 printf("to a Fahrenheit temperature.");

/* Get temp from user in Celsius*/
 printf("\n\nPlease enter the Celsius temperature that you want to convert=>");
 scanf("%lf", &ctemp);


/* Calculate temp in Fahrenheit*/
 ftemp = (1.8 * ctemp);
 result = ftemp + 32;


/* Display the result*/
 printf("With a Celsius temperature of %lf you get a",ctemp);
 printf("\nFarenheit temperature of %lf ",result);
 printf("\n");

 return 0;
}


