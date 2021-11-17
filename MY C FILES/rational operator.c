//using relational operator with if statement
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d" ,&age);
	
	if(age >= 18)
	printf("vote now! !");
	
	if(age < 18)
	printf("can't vote...");
	
	return 0;
}
