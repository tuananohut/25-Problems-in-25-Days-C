/*
In arithmetic and number theory, the least common multiple, lowest common multiple, 
or smallest common multiple of two integers a and b, usually denoted by lcm(a, b), is the 
smallest positive integer that is divisible by both a and b. For instance, lcm of 8 and 12 is 24.
Write a program that takes two numbers from a user and finds their least common multiple. 
According to found result, program returns an appropriate message. Program terminates when 
user enters -1 otherwise asks new number after each return. Do not forget to control suitability 
of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number1, number2, max, min, lcm;
	
	do{
		
		printf("Enter first number:");
		scanf("%d", &number1);
		
		printf("Enter second number:");
		scanf("%d", &number2);
		
	}while(number1 < 0 || number2 < 0 || number1 == number2);
	
	if(number1 > number2){
		max = number1;
		min = number2;
	}
	
	else{
		max = number2;
		min = number1;
	}
	
	for(int i = 1; i <= max; i++){
		if((min * i) % max == 0){
			lcm = min * i;
			break;
		}
	}
	
	printf("The LCM of %d and %d is %d", number1, number2, lcm);
	
	return 0;
	
}
