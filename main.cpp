#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int p,N,T,i;
    scanf("%lld", &T);
for(i = 0; i < T; i++)
    { long long int sum = 0;
    scanf("%lld\n", &N);

    p = (N-1)/3;
    sum = ((3*p*(p+1))/2);

    p = (N-1)/5;
    sum = sum + ((5*p*(p+1))/2);

    p = (N-1)/15;
    sum = sum - ((15*p*(p+1))/2);
    printf("%lld\n", sum);
    }
    return 0;
}
