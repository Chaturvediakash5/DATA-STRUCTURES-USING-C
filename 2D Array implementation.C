//A cprogram for 2d array(matrix 2*2)
#include<stdio.h>
#include<conio.h>
void main()
{
float a[2][2];
int i,j;
printf("Enter values for  2 D array\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%f",&a[i][j]);
}
}
printf("Enter d values in matrix are\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%f\t",a[i][j]);
}
printf("\n");
}
getch();
}
