#include<stdio.h>

int main()

{    
    int i ,j, matrix[2][2] ;
    printf("the matrix is\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nmatrix[%d][%d] :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",matrix[i][j]);
        }
    printf("\n");
    }
    return 1;
}