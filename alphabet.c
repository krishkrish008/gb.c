#include<stdio.h>
void main()
{
char x;
printf("Enter any character");
scanf("%c",&x);
if( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
{
printf("it is alphabet",x);
}
else
{
printf("it is not alphabet",x);
}
return 0;
}
