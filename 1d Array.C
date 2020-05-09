#include<stdio.h>
#include<coio.h>
void main()
{
clrscr();
float a[5];
int i;
printf("Enter 5 Numbers in Array\n");
for(i=0;i<5;i++)
{
Scanf("%f",&a[i]);
}
printf("Entered Elements in Array are\n");
for(i=0;i<5;i++)
{
printf("%f\n",a[i]);
}
getch();

}
