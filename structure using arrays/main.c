#include <stdio.h>
#include <stdlib.h>
struct inf
{
    char name[50];
    float marks;
}arr[2];
int main()
{
    int n,i;
    printf("enter the number of student");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name of the student");
        scanf("%s",&arr[i].name);
        printf("enter the marks of the student");
        scanf("%f",&arr[i].marks);
    }
    for(i=0;i<n;i++)
    {

        printf("%s",arr[i].name);

        printf("%f",arr[i].marks);
           }

}
