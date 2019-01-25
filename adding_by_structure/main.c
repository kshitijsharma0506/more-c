#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int n,arr[1000],i=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int val,j=1,r[1000],l=0, flag;
    i=1;

    while(i!=0)
    {
        r[j]=arr[i];
        i=abs(arr[i]-arr[i+1]);
        j=j+1;
    }
    /*
    if(i==0)
        {
            flag=1;
        }
    if(r[j]==r[1])
        {
            flag=0;
        }*/
    for(i=1;i<j;i++)
    {
        printf("%d ",r[i]);
    }/*
    printf("\n");
    if(flag==1)
    {
        printf("Happy");
    }
    else
    {
        printf("Angry");
    }*/
}
