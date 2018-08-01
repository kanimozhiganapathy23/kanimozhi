#include<stdio.h>
int main()
{
    int a[5]={3,4,9834,345,1},i,max,temp,j;
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    printf("\n");
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
           { if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        printf("\n");
        for(i=0;i<5;i++)
        {
            printf("%d  ",a[i]);
        }
printf("%d",a[1]);
}
