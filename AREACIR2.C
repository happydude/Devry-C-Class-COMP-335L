/*                                                Jason J. Davis
						  COMP-335L
						  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ________________                         Due:

AreaCir2.C -- rewrite of a previous program (AreaCir.C) with
functions performing the seperate tasks. This program uses
an ANSI defined constant and " built in" function (M_PI, and
pow() - found in math.h) Three Borland provided functions
are used - Clrscr(),getch(), and gotoxy() (all found in conio.h).

*/

# include <stdio.h>
#include <math.h>	       /* Necessary for M_PI, and pow() */
#include <conio.h>

double getRadius (void);
double circArea (double calcRadius) ;
void displayResult (double outRadius, double outArea) ;

/* =============================================== */

void main (void)
{
double radius, area;
char continu;

clrscr();
radius = getRadius ();
area = circArea(radius);
clrscr();
displayResult (radius, area);
getch ();
}
/* ---------------------------------------- */
double getRadius(void)
{
double inRadius;

printf("\n\nPlease enter the radius of your circle =");
scanf("%lf", &inRadius);
return inRadius;
}
/* ---------------------------------------------------------- */
double circArea (double calcRadius)
{
return M_PI * pow(calcRadius,2) ;		      /* area = PI r2 */
}
/* ------------------------------------------------- */
void displayResult(double outRadius, double outArea)
{
printf("\n\n\n\nWith a radius of %0.3f units, ", outRadius);
printf("your circle has an area of %0.3f units\x0FD", outArea);
}
