#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *p[];
int acceptfive()
{
int i ;
printf("enter a five names:-");
for(i=0;i<=4;i++)
gets(p[i]);
}
 
int printfive()
{
int x;
for(x=0;x<=4;x++)
{
puts(p[x]);
}
}

int sorting()
{
int r, i,j,s[10];
for(i=0;i<=4;i++)
{
for(j=0;j<=3-i;j++)
{
r=strcmp(p[j],p[j+1]);
if(r>0)
{
strcpy(s,p[j]);
strcpy(p[j],p[j+1]);
strcpy(p[j+1],s);
}
}
}
}

int freefun()
{
int i;
for(i=0;i<=4;i++){
free(p[i]);
}
}
main()
{
int i;
for(i=0;i<=4;i++){
p[i]=(char *) malloc(15);
}
acceptfive();
printf("**********after sorting names************\n");
sorting();
printfive();
freefun();
}

OUTPUT:-
enter a five names:-ksuh
lal
nan
ajay
ban
**********after sorting names************
ajay
ban
ksuh
lal
nan