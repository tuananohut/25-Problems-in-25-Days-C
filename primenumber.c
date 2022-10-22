/*
A prime number is a natural number greater than 1 with only two factors – themselves and 1. 
A prime number cannot be divided by any other numbers without leaving a remainder. An 
example of a prime number is 13. It can only be divided by 1 and 13.
Write a program that takes a number from a user and finds greatest prime number smaller 
than the given number. According to control result, program returns an appropriate message. 
Program terminates when user enters -1 otherwise asks new number after each return. Do not 
forget to control suitability of user’s input.
*/

#include <stdio.h>

int calculate();

int main(){
	
	int number, newnumber, count = 0, result, total = 1;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 2);
	
	total = calculate(number);
	
	if(total == 1){
		printf("%d is a prime number", number);
	}
	else{
		printf("%d is not a prime number", number);
		newnumber = number;
		for(int j = 2; j < number; j++){
			newnumber++;
			result = calculate(newnumber);
			if(result == 1){
				printf("\n%d is the biggest prime number bigger than %d", newnumber, number);
				break;
			}
		}
	}
	
	return 0;
}

int calculate(int x){
	int counter, total = 1;
	for(int i = 2; i < x; i++){
		counter = x % i;
		if(counter == 0){
			total = 0;
		}
	}
	return total;
}
