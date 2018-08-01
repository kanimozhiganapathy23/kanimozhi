#include<stdio.h>
int main()
{
    int a[8]={3,43,3,5,6,45,43,45},i,j,count=0;
    for(i=0;i<8;i++)
    {
	count=0;
        for(j=0;j<8;j++)
        {
            if(a[i]==a[j])
            {
              ++count;
            }
        }
              if(count==1)
              {
              	printf("%d\n",a[i]);
              }

        }
}
