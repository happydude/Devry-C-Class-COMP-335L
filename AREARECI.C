/*                                                Jason J. Davis
                                                  COMP-335L
                                                  AAHS Summer '97
Sign off:____________________________             Row #:7

Date:    ________________                         Due:

AreaReci.C --   This program calculates the area of rectangles
		until a length or width of zero is input by the
		user. It's purpose is to introduce the watch
		window.
*/
 #include <stdio.h>
 #include <conio.h>
void main(void)
{
	double length, width, area;

	do
{
	clrscr();
	printf("\n\nPlease enter the length of your  rectangle:  ");
	scanf("%lf", &length);
	printf("\n\nPlease enter the width of your rectangle:  ");
	scanf("%lf", &width);
	clrscr() ;
	if (length != 0.0 && width !=0.0)
{
	area = length * width;
	printf("\n\nWith a length of %0.3g units, ", length);
	printf("and a width of %0.3g units, ", width);
	printf("your rectangle\nhas an area of %0.3g unitsý", area);
	getch();

}
else
	printf("Thank you for using this program. ");
}	while (length != 0.0 && width != 0.0);
getch() ;
}
