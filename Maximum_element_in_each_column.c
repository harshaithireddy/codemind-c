#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int matrix[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(j=0;j<n;j++)
    {
        int max=matrix[0][j];
        for(i=1;i<m;i++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
            }
        }
        printf("%d
", max);
    }
}
