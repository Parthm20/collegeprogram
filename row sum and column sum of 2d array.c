#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,sum=0;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSUM TOTAL:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\ncolumn total:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
}   
