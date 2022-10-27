/*
In number theory, a perfect number is a positive integer that is equal to the sum of its 
positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding 
itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.
Write a program that takes a number from a user and controls whether it is perfect or not. If 
the number is not perfect, find smallest perfect number greater than given number.
According to control result, program returns an appropriate message. Program terminates when user 
enters -1 otherwise asks new number after each return. Do not forget to control suitability of 
user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, counter, mod;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	for(int i = 1; i < number; i++){
		mod = number % i;
		if(mod == 0){
			counter = counter + i;
		}
	}
	
	if(counter == number){
		printf("%d is a perfect number", number);
	}
	
	else{
		printf("%d is not a perfect number", number);
	}
	
	return 0;
}
