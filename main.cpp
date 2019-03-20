#include<iostream>
using namespace std;

int main()
{
    int n,i,reg[100],a[100],index[100];
    char add[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>reg[i];
    cin>>add[i];
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        index[i]=a[i];
    }
    int min=0;
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }
        }
    }int temp=0;
    for(i=0;i<n;i++)
    {
        if(index[i]==a[0])
            {
                temp=i;
                break;
            }
    }
    cout<<reg[temp]<<"\n"<<add[temp];
}
