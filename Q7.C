#include<stdio.h>
#include<string.h>

main(int argc,char *argv[])
{
char str[5][10];
int i,j ;
printf("%d",argc);
for (i=0;i<=argc;i++)
printf("%s ",str[i]);
}