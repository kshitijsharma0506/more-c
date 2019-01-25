#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*


TO FIND MAX USING POINTERS
///////////////////
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<*(arr+i))
        {
            max=*(arr+i);
        }
    }
    printf("%d",max);
}









IMPORTANT EXAMPLE


///////////
int lenofchar();
int main()
{
    char a[1000];
    gets(a);
    int l;
    l=lenofchar(a);
    printf("%d",l);
}

int lenofchar(char *ch)// ch = base address of a[100] i.e (&a[0] )
{
    int len=0;
    while(*ch!='\0')//'\0' IS NULL TERMINATOR i.e the loop will run before the empty space i.e before the ending of the senntence
        {
        len++;
        ch++;
    }
    return len;
}



FOR FACTORIAL

//////////////

int fac();
int main()
{
    int n,a;
    scanf("%d",&n);
    a=fac(&n,n);
    printf("%d",a);
}

int fac(int *num,int n)
{
    int i;
    *num=1;
    for(i=1;i<=n;i++)
    {
        *num=*num*i;
    }
    return *num;
}
*/





int main()
{

}

