/*                                                Jason J. Davis
                                                  COMP-335L
                                                  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ___07/17/1997___                         Due:


*/
#include <stdio.h>
#include <conio.h>

void main(void)
{
double ctemp,ftemp,result;


clrscr(); /*clear the screen*/


 printf("This program will convert a Celsius temperature\n");
 printf("to a Fahrenheit temperature.");

/* Get temp from user in Celsius*/
 printf("\n\nPlease enter the Celsius temperature that you want to convert=>");
 scanf("%lf", &ctemp);


/* Calculate temp in Fahrenheit*/
 ftemp = (1.8 * ctemp);
 result = ftemp + 32;

 clrscr(); /* Clear the screen*/

/* Display the result*/
 printf("With a Celsius temperature of%lf you get a");
 printf("\nFarenheit temperature of %lf",ctemp,result);


/* Wait for user to read message*/
 getch();
}


