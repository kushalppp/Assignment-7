#include<stdio.h>
#include<stdlib.h>
int *arr;
 int twodimentional()
{
int r,c, i,j;
printf("enter the number of rows and columns");
	scanf("%d%d",&r,&c);
	int *arr[r];
	for(i=0;i<r;i++)
	arr[i]=(int*)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
}

 int freefun()
{
free(arr);
}

main()
{
 twodimentional();
  freefun();
}


OUTPUT:-
enter the number of rows and columns2
2
7
8

9
6

 7 8
 9 6