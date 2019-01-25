#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    a=2*n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<a;j++)
        {
            if(j==n-i-1 || j==n+i-1)
            {
                printf("* ");
            }
            else
            {
            printf(". ");
            }
        }
        printf("\n");
    }
}
