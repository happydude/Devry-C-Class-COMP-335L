/*                                                Jason J. Davis
						  COMP-335L
						  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ________________                         Due:

AreaCir.c -- This program will calculate the area of a circle .
It is written in (mostly) ANSI C and demonstrates the
three primary parts of a program - input,process,and output.

*/


#include <stdio.h>	/* necessary for printf() and scanf	*/
#include <conio.h>	/* necessary for clrscr () and getch() note:conio.h is NOT part of ANSI C*/

void main (void)
{
double radius, area;
const double PI =3.14159265358979;
clrscr();
printf("\n\nPlease enter the radius of your circle => ");
scanf("%lf", & radius);
area = PI * radius*radius;		/* area = PIr2 */
clrscr();
printf("\n\n\n\nWith a radius of %f units, ", radius);
printf("your circle has an area of %f units2", area);
getch (); /* wait for user keystroke (when finished reading*/
}
