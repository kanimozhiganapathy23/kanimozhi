#include<stdio.h>
int main()
{
    int a[8]={3,43,3,5,4,45,6,7},i,j;
    for(i=0;i<8;i++)
    {
       // for(j=i+1;j<8;j++)//
            if(i==a[i])
            {
                printf("%d  ",a[i]);
               
            }
    }
}
