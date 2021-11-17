//(condition) ? true value : false value;
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d" ,&age);
	
	/*(age >= 18)
	printf("vote now! !");
	
	?(age < 18)
	printf("can't vote...");*/
	
	(age >= 18) ? printf("vote now! !") : printf("can't vote...");
	
	return 0;
}
