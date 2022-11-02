/*
A number is said to be special number when the sum of factorial of its digits is equal to the 
number itself. Example- 145 is a Special Number as 1!+4!+5!=145.
Write a program that takes a number from a user and controls whether it is special or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int factorial();

int main(){
	
	int number, newnumber, sum = 0, mod = 0;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	newnumber = number;
	
	while(newnumber != 0){
		mod = newnumber % 10;
		sum = factorial(mod) + sum;
		newnumber = newnumber / 10;
	}
	
	if(sum == number){
		printf("%d is a special number", number);
	}
	
	else
		printf("%d is not a special number", number);
	
	return 0;
	
}

int factorial(int x){
	
	int fact = 1;
	
	for(int i = 1; i <= x; i++){
		fact = fact * i;
	}
	
	return fact;
	
}
