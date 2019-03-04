#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

    int t;
    scanf("%lld",&t);
    for(int a0 = 0; a0 < t; a0++)
    { long long int arr,i,j=0,temp=0,a=1,b=2,r[100],k,sum=0;
        scanf("%lld",&arr);
        r[0]=a;
        while(arr>temp)
        {

            j=j+1;
            r[j]=b;
            temp=a+b;
            a=b;
            b=temp;
         }
        for(k=0;k<=j;k++)
        {
            if(r[k]%2==0)
            sum=sum+r[k];
        }
        printf("%lld\n",sum);
    }

    return 0;
}
