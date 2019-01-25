#include<stdio.h>
#include<math.h>
int main()
{
    int l,u,i,j,k,array[100][100][100];
    scanf("%d\n%d",&l,&u);
    for(i=l;i<u;i++)
    {
        for(j=l;j<u;j++)
        {
            for(k=l;k<u;k++)
            {
                if((sqrt(pow(i,2)+pow(j,2))<=k+1 || sqrt(pow(i,2)+pow(j,2))<=k-1 || sqrt(pow(i,2)+pow(j,2))<=k+2 || sqrt(pow(i,2)+pow(j,2))<=k-2) )
                {
                    array[i][j][k]=i,j,k;
                }
            }
        }
    }
for(i=l;i<u;i++)
    {
        for(j=l;j<u;j++)
        {
            for(k=l;k<u;k++)
            {
                printf("%d",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
