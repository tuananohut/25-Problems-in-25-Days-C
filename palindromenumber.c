/*
A palindromic number is a number that remains the same when its digits are reversed like 
16461.
Write a program that takes a number from a user and controls whether it is palindrome or not. 
If the number is not palindrome, find smallest palindrome number greater than given number. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.

*/

#include <stdio.h>

int main(){
	
	int number, newnumber, mod = 0, sum = 0;
	
	do{
		
		printf("Enter a number:");
		scanf("%d", &number);
		
	}while(number < 0);
	
	newnumber = number;
	
	while(newnumber != 0){
		
		mod = newnumber % 10;
		sum = sum * 10 + mod;
		newnumber = newnumber / 10; 
		
	}
	
	if(sum == number)
		printf("%d is a palindrome number", sum);
		
	else
		printf("%d is not a palindrome number", number);
	
}
