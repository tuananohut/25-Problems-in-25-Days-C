/*
In mathematics, the greatest common divisor (GCD) of two or more integers, which are not all 
zero, is the largest positive integer that divides each of the integers. For example, the GCD of 
8 and 12 is 4.
Write a program that takes two numbers from a user and finds their greatest common divisor. 
According to found result, program returns an appropriate message showing GCM by 
multiplication of prime numbers. Program terminates when user enters -1 otherwise asks new 
number after each return. Do not forget to control suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number1, number2, gcd, flag;
	
	do{
		
		printf("Enter first number:");
		scanf("%d", &number1);
		
		printf("Enter second number:");
		scanf("%d", &number2);
		
	}while(number1 < 0 || number2 < 0);
	
	for(int i = 1; i <= number1 && i <= number2; i++){
		if(number1 % i == 0 && number2 % i == 0){
			gcd = i;
		}
	}
	
	printf("The GCD of %d and %d is %d", number1, number2, gcd);
	
	return 0;
	
}
