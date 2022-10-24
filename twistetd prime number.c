/*
A number is said to be twisted prime if it is a prime number and reverse of the number is also 
a prime number. An example of a twisted prime number is 13 because both 13 and 31 are 
prime numbers.
Write a program that takes a number from a user and controls whether it is twisted prime or 
not. According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int prime();

int main(){
	
	int number, result, mod, rnewnum, counter;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 10);
	
	result = prime(number);
	
	if (result == 0){
		rnewnum = number;
		while(number != 0){
			mod = number % 10;
			counter = mod + counter * 10;
			number = number / 10;
		}
		
		result = prime(counter);
		
		if(result == 0){
			printf("%d is a twisted prime number", rnewnum);
		}
			
		else{
			printf("%d is not a twisted prime number", number);			
		}
	}
	
	else{
		printf("%d is not a twisted prime number.", number);
	}
	
	return 0;
}

int prime(int x){
	int result, total = 0;
	for(int i = 2; i < x; i++){
		result = x % i;
		if(result == 0){
			total = 1;
			break;
		}
	}
	return total;
}
