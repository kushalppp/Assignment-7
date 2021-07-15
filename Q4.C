#include<stdio.h>
#include<string.h>

int str[5][10];
int acceptfive()
{
int i,j;
printf("enter a five names:-");
for(i=0;i<=4;i++)
{
gets(str[i]);
}
}

int printfive()
{
int i;
printf("Dictionary order is=");
for(i=0;i<=4;i++)
{
puts(str[i]);
}
}

int sorting()
{
int r, i,j,s[10];
for(i=0;i<=4;i++)
{
for(j=0;j<=3-i;j++)
{
r=strcmp(str[j],str[j+1]);
if(r>0)
{
strcpy(s,str[j]);
strcpy(str[j],str[j+1]);
strcpy(str[j+1],s);
}
}
}
}

main()
{

acceptfive();
sorting();
printfive();
}



OUTPUT:-
enter a five names:-hemil
guru
kush
ajay
daxesh
Dictionary order is=
ajay
daxesh
guru
hemil
kush