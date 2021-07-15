#include<stdio.h>
void mul()
{
int i,j,k, A[3][3],B[3][3],C[3][3],sum=0;
printf("enter a value\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("enter a value");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&B[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=0;
for(k=0;k<=2;k++)
sum=sum+A[i][k]*B[k][j];
C[i][j]=sum;
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",C[i][j]);
}
printf("\n");
}
}
main()
{
mul();
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
enter a value1
2
3
4
5
6
7
8
9
30 36 42
66 81 96
102 126 150