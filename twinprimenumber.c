/*
A twin prime is a prime number that is either 2 less or 2 more than another prime number—for 
example, either member of the twin prime pair (41, 43). In other words, a twin prime is a prime 
that has a prime gap of two.
Write a program that takes a number from a user and controls whether it is twin prime or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int prime();

int main(){
	
	int number, total = 1, newnumber;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 2);
	
	total = prime(number);
	
	if(total == 1){
		newnumber = number + 2;
		total = prime(newnumber);
		if(total == 1){
			printf("%d and %d are cousin prime numbers", number, newnumber);
		}
		else{
			newnumber = number - 2;
			total = prime(newnumber);
			printf("%d and %d are cousin prime numbers", newnumber, number);
		}
	}
	
	else{
		printf("%d is not a prime number");
	}
	
	return 0;
	
}

int prime(int x){
	
	int counter, total = 1;
	for(int i = 2; i < x; i++){
		counter = x % i;
		if(counter == 0){
			total = 0;
		}
	}
	
	return total;
	
}
