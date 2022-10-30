/*
In mathematics, a harshad number (or Niven number) in a given number base is 
an integer that is divisible by the sum of its digits. For instance, 24 is harshard number because 
24 is divisible by 2+4=6.
Write a program that takes a number from a user and controls whether it is harshard or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, division, mod, result;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	int newnum = number;
	
	while(newnum != 0){
		mod = newnum % 10;
		result = mod + result;
		newnum = newnum / 10;
	}
	
	if(number % result == 0){
		printf("%d is a harshard number", number);
	}
	
	else
		printf("%d is not a harshard number", number);
	
	return 0;
	
}
