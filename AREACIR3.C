/*                                                Jason J. Davis
                                                  COMP-335L
                                                  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ________________                         Due:

AreaCir3.C --rewrite of a previous program (AreaCir2.C) with a loop
construct implimented.

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
do
{
clrscr();
radius = getRadius ();
area = circArea(radius);
clrscr();
displayResult (radius, area);

gotoxy(10,15);
printf("Do you whish to continue (n for no, any key to continue)? ");
continu = getche();
}while ((continu != 'N') && (continu != 'n'));
}
/*---------------------------------------------------------------------*/
double getRadius (void)
{
double inRadius;

printf("\n\nPlease enter the radius of your circle => ");
scanf("%lf", &inRadius);
return inRadius;
}
/*-------------------------------------------------------------*/

double circArea(double calcRadius)
{
return M_PI * pow(calcRadius,2);		/* area =ãrý  */
}
/* ----------------------------------------------------------*/


void displayResult (double outRadius, double outArea)
{
printf("\n\n\n\nWith a radius of %0.3g units, ", outRadius);
printf("your circle has an area of %0.3g units\x0FD", outArea);
}
