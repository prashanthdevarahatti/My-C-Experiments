//Unary opeartors: +,-,++,--
#include<stdio.h>
int main()
{
	int x = +4;   //unary + operator
	printf("Value of -x = %d",-x);
	
	int z = -10;   //unary - operator
	printf("\nValue of -z = %d\n", -z);  //-(-10)
	
	//Address of a variable can be calculated using &
	//format specifier can be: %x or %d 
	printf("Address of x and z respectively are: %d %d",&x,&z);  
	
	return 0;
	}
