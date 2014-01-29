// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include<stdio.h>


int main()
{
	int number = 0 ;
	scanf("%d",&number);

	//Check the input number
	if(number < 10 || number > 250){
		printf("Sorry bro, bad input");
		return -1;
	}

	//Actual implementation 
	for (int div=2;div<number;div++){
		int modulus = number % div;
		if(modulus == 0){
			printf("Sorry bro, not a prime");
			return -1;
		}
	}

	printf("Yeah we got a Prime");
	return 0;
}

