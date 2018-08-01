#include<stdio.h>
int main()
{
    int a[8]={3,43,3,5,6,45,43,45},i,j;
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
                printf("\n");
            }
        }
    }
}
