#include<stdio.h>
struct kani
{
	char name[20];
	int salary;
	float time;
	
}f[10];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
       {
       scanf("%s",f[i].name);
	scanf("%d",&f[i].salary);
	scanf("%f",&f[i].time);
}
for(i=0;i<n;i++)

	printf("%s  %d  %f",f[i].name,f[i].salary,f[i].time);
}
