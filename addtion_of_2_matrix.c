#include<stdio.h>
void accept(int mat[10][10],int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&mat[i][j]);
}
void display(int mat[10][10],int c,int r)
{
    int i,j;
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        printf("%d\t",mat[i][j]);
        printf("\n");
      }
}
void addmat(int[10][10])