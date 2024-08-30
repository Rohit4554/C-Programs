#include<stdio.h>
void accept(int mat[10][10],int r,int c)
{
    int i,j,n;
    for(i=0;i<n;i++)
    for(j=0;j<c;j++)
    scanf("%d",&mat[i][j]);
}
void display(int mat[10][10],int r,int c)
{
    int i,j,n;
    for(i=0;i<n;i++)
    for(j=0;j<c;j++)
    printf("%d\t",mat[i][j]);
}
void addmat(int a[10][10],int b[10][10],int c[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    c[i][j]=a[i][j]+b[i][j];

}
void main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],r1,c1,r2,c2,i,j,r,c;
    printf("How many rows and column in Matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of Matrix 1:");
    accept(mat1,r,c);
    printf("Enter the elements of Matrix 2:");
    scanf("%d%d",&r,&c);
    accept(mat2,r,c);
    addmat(mat1,mat2,mat3,r,c);
    printf("Matrix 1:\n");
    display(mat1,r,c);
    printf("Matrix 1:\n");
    display(mat2,r,c);
    printf("Addition",r,c);
    display(mat3,r,c);
}
