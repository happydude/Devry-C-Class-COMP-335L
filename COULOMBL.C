/*                                                Jason J. Davis
						  COMP-335L
						  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ________________                         Due:7/16/1997

CoulLaw.C -- This program will calculate the force of attraction
     or force of repulsion between two charged bodies.  It is
     written in (mostly) ANSI C and demonstrates the ability of
     the programmer and the compiler to work together to find
     errors in code.
	 #include <conio.h>
*/

#include </usr/include/stdio.h>

#include </usr/include/caca_conio.h>

void main(void)
{
  double Q1, Q2, Distance, Force;
  const double k = 9000000000.;



  clrscr();

  printf("\n\nPlease enter all requested values using basic metric units:");

  printf("\n\nPlease enter the charge on the first body (Q1) => ");
  scanf("%lf", &Q1);

  printf("\nPlease enter the charge on the second body (Q2) => ");
  scanf("%lf", &Q2);

  printf("\nPlease enter the distance between the two charged bodies => ");
  scanf("%lf", &Distance);

  Force =k * Q1 * Q2/(Distance*Distance);

  clrscr();
  printf("\n\n\n\nWith Q1 = %f Coulombs, and Q2 = %f Coulombs, ", Q1, Q2);
  printf("and\nseparated by %f meters, the force between them is %f Newtons",Distance, Force);
  getch();  /* wait for user keystroke (when finished reading) */
  return 1;
}
