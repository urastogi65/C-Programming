#include<stdio.h>
#include<conio.h>
void main()
{
int a=2;
int b=1;
int c=3;
//area and parameter of square
printf("area of square= %d", a*a);
printf("area of parameter= %d",4*a);
//area and parameter of rectangle
printf("area of rectangle= %d", a*b);
printf("area of parameter= %d", (a+b)*2);
//area and parameter of circle
printf("area of circle= %f",3.14*(a*a));
printf("area of parameter= %f",2*3.14*a);
//area and parameter of triangle
printf("area of triangle= %f",.5*a*b);
printf("area of parameter=%f",a+b+c);
getch();
}