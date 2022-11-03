/*
Armstrong number is a number that is equal to the sum of cubes of its digits. For example, 
153=1^3 + 5^3 + 3^3 that 153 is Armstrong number.
Write a program that takes a number from a user and controls whether it is armstrong or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input
*/

#include <stdio.h>

int main(){
	
	int number, newnumber = 0, mod = 0, digit = 0, result = 0, p = 1;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	newnumber = number;
	
	while(newnumber != 0){
		mod = newnumber % 10;
		mod = mod * mod * mod;
		result = mod + result;
		newnumber = newnumber / 10;
	}
	
	if(result == number)
		printf("%d is a armstrong number", number);
	
	else
		printf("%d is not a armstrong number", number);
	
	return 0;
	
}
