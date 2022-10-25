/*
Co-prime numbers are the numbers whose common factor is only 1. There should be a 
minimum of two numbers to form a set of co-prime numbers. Such numbers have only 1 as 
their highest common factor, for example, {4 and 7}, {5, 7, 9} are co-prime numbers. Co-prime 
numbers need not be prime numbers always.
Write a program that takes two numbers from a user and controls whether they are coprime or 
not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int coprime();

int main(){
	
	int number1, number2, result = 0;
	
	do{
		
		printf("Enter first number:");
		scanf("%d", &number1);
		
		printf("Enter second number:");
		scanf("%d", &number2);
		
	}while(number1 < 0 || number2 < 0);
	
	result = coprime(number1, number2);
	
	if(result == 0){
		printf("%d and %d are co-prime numbers.", number1, number2);		    
   	}
	else{
		printf("%d and %d are not co-prime numbers.", number1, number2);
}    	}

int coprime(int x,int y){
	int counter1, counter2, result = 0;
	for(int i = 2; i < x ; i++){
		counter1 = x % i;
		counter2 = y % i;
		if(counter1 == 0 && counter2 == 0){
			result = 1;
			break;
		}
	}
	return result;
}
