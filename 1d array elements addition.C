#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a[5],r,b=0;
printf("Enter the values for addition in array\n");
for(r=0;r<=4;r++)
{
scanf("%f",&a[r]);
b=b+a[r];
}
printf("Addition is %f\n",b);
getch();
}
