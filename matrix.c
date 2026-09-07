#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("enter number of rows");
    scanf("%d",&n);
    
    printf("enter number of columns");
    scanf("%d",&m);

    int matrix[n][m];
     printf("\nenter elements");
    for(i=0; i<n; i++)
    {for(j=0;j<m;j++)
    {scanf("%d",&matrix[i][j]);}}
    
     printf("entered matrix");
    for(i=0; i<n; i++)
    {printf("\n");
        for(j=0;j<m;j++)
    {printf("%d\t",matrix[i][j]);}}

   

return 0;
}