/*
A number is called Disarium number if the sum of its power of the positions from left to right is 
equal to the number. Example: 1 + 3*3 + 5*5*5 = 1 + 9 + 125 = 135
Write a program that takes a three-digit number from a user and controls whether it is disarium 
or not. According to control result, program returns an appropriate message. Program 
terminates when user enters -1 otherwise asks new number after each return. Do not forget to 
control suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, newnumber, sum = 0, digit = 0, result = 0, counter, sum2 = 0;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	newnumber = number;
	
	while(newnumber != 0){
		counter = newnumber % 10;
		sum++;
		newnumber = newnumber / 10;
	}
	
	newnumber = number;
	
	while(newnumber != 0){
		sum2 = sum;
		digit = newnumber % 10;
		result = pow(digit, sum) + result;
		sum--;
		newnumber = newnumber / 10;
	}
	
	if(result == number)
		printf("%d is a disarium number", number);
		
	else
		printf("%d is not a disarium number", number);
	
	return 0;
	
}
