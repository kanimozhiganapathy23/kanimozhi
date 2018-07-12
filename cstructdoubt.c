#include<stdio.h>
struct kani
{
	char name[20];
	int salary;
	float time;
	float sum;
	
}f[10];
void add(struct kani n,struct kani,struct kani);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
       {
       scanf("%s",f[i].name);
	scanf("%d",&f[i].salary);
	scanf("%f",&f[i].time);
	add(n,salary,time);

for(i=0;i<n;i++)

	printf("%s  %d  %f  %f",f[i].name,f[i].salary,f[i].time);
       }
}
void add(struct kani n,struct kani,struct kani)
{
for(i=0;i<n;i++)
{
	f[i].sum=f[i].salary+f[i].time;
	printf("%f  ",f[i].sum);
}
}
