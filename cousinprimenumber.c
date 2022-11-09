/*
A cousin prime is a prime number that is either 4 less or 4 more than another prime number—
for example, either member of the cousin prime pair (13, 17). In other words, a cousin prime is 
a prime that has a prime gap of four.
Write a program that takes a number from a user and controls whether it is cousin prime or 
not. According to control result, program returns an appropriate message. Program terminates 
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
		newnumber = number + 4;
		total = prime(newnumber);
		if(total == 1){
			printf("%d and %d are cousin prime numbers", number, newnumber);
		}
		else{
			newnumber = number - 4;
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
