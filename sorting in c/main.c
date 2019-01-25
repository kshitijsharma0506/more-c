#include<stdio.h>
int main()
{
    int r,c,mat[100][100],i,j;
    scanf("%d",&r);
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    /*int mat0[100],mat1[100],mat2[100];
    for(j=0;j<c;j++)
    {
        mat0[j]=mat[0][j];
    }
    for(j=0;j<c;j++)
    {
        mat1[j]=mat[1][j];
    }
    for(j=0;j<c;j++)
    {
        mat2[j]=mat[2][j];
    }*/
    int swap;
   for (i=0;i<c-1;i++)
  {
    for (j=0;j<c-i-1;j++)
    {
      if (mat[0][j]>mat[0][j+1])
      {
        swap=mat[0][j];
        mat[0][j]=mat[0][j+1];
        mat[0][j+1]=swap;
      }
    }
  }
  swap=0;
   for (i=0;i<c-1;i++)
  {
    for (j=0;j<c-i-1;j++)
    {
      if (mat[1][j]>mat[1][j+1])
      {
        swap=mat[1][j];
        mat[1][j]=mat[1][j+1];
        mat[1][j+1]=swap;
      }
    }
  }
  for (i=0;i<c-1;i++)
  {
    for (j=0;j<c-i-1;j++)
    {
      if (mat[2][j]>mat[2][j+1])
      {
        swap=mat[2][j];
        mat[2][j]=mat[2][j+1];
        mat[2][j+1]=swap;
      }
    }
  }/*
  for(j=0;j<c;j++)
  printf("%d",mat[0][j]);
  */int flag;
    for(j=0;j<c;j++)
    {
    if((mat[0][j]==mat[1][j]) && (mat[1][j]==mat[2][j]) && (mat[0][j]==mat[2][j]))
    {
        flag=1;
    }
    if((mat[0][j]!=mat[1][j]) && (mat[1][j]!=mat[2][j]) && (mat[0][j]!=mat[2][j]))
    {
        flag=0;
    }
    }
    if(flag=1)
    {
        printf("Shuffled Row Matrix");
    }
    if(flag=0)
    {
        printf("Not Shuffled Row Matrix");
    }
}
