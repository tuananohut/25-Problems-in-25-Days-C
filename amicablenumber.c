/*
Amicable numbers are two different numbers related in such a way that the sum of the proper 
divisors of each is equal to the other number. The smallest pair of amicable numbers is 
(220, 284). They are amicable because the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 
44, 55 and 110, of which the sum is 284; and the proper divisors of 284 are 1, 2, 4, 71 and 
142, of which the sum is 220.
Write a program that takes two numbers from a user and controls whether they are amicable 
or not. According to control result, program returns an appropriate message. Program 
terminates when user enters -1 otherwise asks new number after each return. Do not forget to 
control suitability of user’s input.
*/

#include <stdio.h>

int divisiors();

int main(){
	
	int number1, number2, result1 = 0, result2 = 0;
	
	do{
		printf("Enter the first number:");
		scanf("%d", &number1);
		
		printf("Enter the second number:");
		scanf("%d", &number2);
	}while(number1 < 0 || number2 < 0);
	
	result1 = divisiors(number1);
	result2 = divisiors(number2);
	
	if(result1 == number2 && result2 == number1){
		printf("%d and %d are amicable numbers.", result1, result2);
	}
	
	else{
		printf("%d and %d are not amicable numbers.", number1, number2);
	}
	
	return 0;
	
}	
	
int divisiors(int x){
	int division, sum = 0;
	for(int i = 1; i < x; i++){
		division = x % i;
		if(division == 0){
			sum = sum + i;
		}
	}
	return sum;
}	
