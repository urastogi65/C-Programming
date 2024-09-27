#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first value,(a):");
scanf("%d",&a);
printf("Enter the second value,(b):");
scanf("%d",&b);
printf("before swapping:a=%d,b=%d/n",a,b);
c=a;
a=b;
b=c;
printf("after swapping a=%d , b=%d",a,b);

return 0;


}