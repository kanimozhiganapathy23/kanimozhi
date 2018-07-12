#include<stdio.h>
struct kani
{
	char name[20];
	int salary;
	float time;
	
}f1,f2;
int main()
{
	gets(f1.name);
	scanf("%d",&f1.salary);
	scanf("%f",&f1.time);
	scanf("%s",f2.name);
	scanf("%d",&f2.salary);
	scanf("%f",&f2.time);
	printf("%s  %d  %f",f1.name,f1.salary,f1.time);
	printf("\n");
	printf("%s  %d  %f",f2.name,f2.salary,f2.time);
}
