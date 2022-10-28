/*
In number theory, a deficient number or defective number is a number n for which the sum of 
divisors of n is less than 2n. For example, the proper divisors of 8 are 1, 2, and 4, and their 
sum is less than 8, so 8 is deficient.
Write a program that takes a number from a user and controls whether it is deficient or not. If 
the number is not deficient, find smallest deficient number greater than given number. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, result, counter;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	for(int i = 1; i <= number; i++){
		result = number % i;
		if(result == 0){
			counter = counter + i;
		}
	}
	
	if(counter < number*2){
		printf("%d is a deficient number", number);
	}
	
	else
		printf("%d is not a deficient number", number);
	
	return 0;
	
}
