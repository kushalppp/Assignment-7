#include<stdio.h>
#include<string.h>

main(int argc,char *argv[])
{
char str[5][10];
int r,s[10];
int i,j ;
printf("%d",argc);
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