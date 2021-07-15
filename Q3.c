#include<stdio.h>
main()
{
int i,j,y, A[3][3],sum=0;
printf("enter a value\n");

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("enter a row:-");
scanf("%d",&y);
if(y<3)
for(i=y;i<y+1;i++)
{
for(j=0;j<=2;j++)
{
sum=sum+A[i][j];
}
}
printf(" a addition of is =%d",sum);
}

OUTPUT:-
enter a value
1
2
3
4
5
6
7
8
9
enter a row:-0
 a addition of is =6