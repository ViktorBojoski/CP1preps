#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,j;
    printf("Enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i+j==n-1||i==n-1)
            {
                    printf("*");
            }
    else
    {
      printf(" ");
    }
}
     printf("\n");
    }
}