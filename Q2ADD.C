#include<stdio.h>
void add()
{
int i,j, A[3][3],B[3][3],C[3][3];
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
C[i][j]=A[i][j]+B[i][j];
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
add();
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
2 4 6
8 10 12
14 16 18
