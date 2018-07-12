#include<stdio.h>
struct kani
{
	char name[20];
	int salary;
	float time;
	float sum;
	
}f1,f2;
void add(struct kani f1,struct kani f2);
int main()
{
   
       scanf("%s",f1.name);
	scanf("%d",&f1.salary);
	scanf("%f",&f1.time);
	 scanf("%s",f2.name);
	scanf("%d",&f2.salary);
	scanf("%f",&f2.time);
	
	add(f1,f2);
       }
void add(struct kani f1,struct kani f2)
{

	f1.sum=f1.salary+f1.time;
	printf("%f  ",f1.sum);
	f2.sum=f2.salary+f2.time;
	printf("%f  ",f2.sum);

}
