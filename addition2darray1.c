#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Enter the no of rows for first and second matrix\n");
    scanf("%d",&rows);
    printf("Enter the no of columns for first and second matrix\n");
    scanf("%d",&columns);
    int array1[rows][columns],array2[rows][columns],array3[rows][columns],i=0,j=0;
    printf("Enter the elements of first matrix\n");
        for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    scanf("%d",&array1[i][j]);
                }
            }
    printf("The elements for first matrix are\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    printf("%d\t",array1[i][j]);
                }
                printf("\n");
             }
    printf("Enter the elements of second matrix\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    scanf("%d",&array2[i][j]);
                }
             }
    printf("The elements of second matrix are\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    printf("%d\t",array2[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    array3[i][j]=array1[i][j]+array2[i][j];
                }
            }
    printf("The elements of matrix after addition are\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<columns;j++)
                {
                    printf("%d\t",array3[i][j]);
                }
                printf("\n");
            }
            return 0;
}


