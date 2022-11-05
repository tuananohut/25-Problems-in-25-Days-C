/*
A spy number is a number where the sum of its digits equals the product of its digits. For 
example, 1124 is a spy number, the sum of its digits is 1+1+2+4=8 and the product of its 
digits is 1*1*2*4=8.
Write a program that takes a number from a user and controls whether it is spy or not. If the 
number is not spy, find smallest spy number greater than given number. According to control 
result, program returns an appropriate message. Program terminates when user enters -1 
otherwise asks new number after each return. Do not forget to control suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, sum = 0, product = 1, newnumber, digit;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	newnumber = number;
	
	while(newnumber != 0){
		digit = newnumber % 10;
		sum = sum + digit;
		product = product * digit;
		newnumber = newnumber / 10;
	}
	
	if(sum == product)
		printf("%d is a spy number", number);
	
	else
		printf("%d is not a spy number", number);
	return 0;
	
}
