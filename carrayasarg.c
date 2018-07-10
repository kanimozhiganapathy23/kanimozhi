#include <stdio.h>
void arry(int a[]);
int main(void) {
	int a[]={23,4,67,5};
	arry(a);
}
void arry(int a[])
{          
	int b[50];
	int c,i,j,k;
 for (c = 0; c < 4 ; c++)
      scanf("%d", &a[c]);
   for(i=3,j=0;i>=0;i--,j++)
   {
   	b[j]=a[i];
   }
   for(k=0;k<4;k++)
   
      printf("%d  ", b[k]);
}
