/*
In number theory, Wagstaff prime is a prime number of the form (2n+1)/3. For instance 11 is 
Wagstaff prime because it is prime number and it can be written as (25 + 1)/3.
Write a program that takes a number from a user and controls whether it is Wagstaff or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/



#include <stdio.h>

int wagstaffp();

int main(){
	
	int number;
		
	do{
		printf("Enter a number:");
		scanf("%d",&number);
	}while(number <= 0);
	
	wagstaffp(number);
	
}

int wagstaffp(int x){
	int sum = 0;
	int multx = x * 3;
	int cikarx = multx - 1;
	for (int i = 1; i <= cikarx; i *= 2){
		int dividem = cikarx % i;
		sum = dividem + sum;	
	}
	if(sum == 0)
		printf("%d is a wagstaff prime", x);
	else
		printf("%d is not a wagstaff prime", x);
}
