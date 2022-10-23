/*
A composite number is a positive integer that can be formed by multiplying two smaller positive 
integers. Equivalently, it is a positive integer that has at least one divisor other than 1 and itself. 
An example of a composite number is 6. It can be divided by not only 1 and 6 but also by 2 
and 3.
Write a program that takes a number from a user and finds smallest composite number greater 
than the given number. According to control result, program returns an appropriate message. 
Program terminates when user enters -1 otherwise asks new number after each return. Do not 
forget to control suitability of user’s input.
*/

#include <stdio.h>

int calculate();

int main(){
	
	int number, newnumber, count = 0, result, total = 1;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	total = calculate(number);
	
	if(total == 0){
		printf("%d is a composite number", number);
	}
	else{
		printf("%d is not a composite number. It is a prime number", number);
		newnumber = number;
		for(int j = 0; j < number; j++){
			newnumber++;
			result = calculate(newnumber);
			if(result == 0){
				printf("\n%d is the biggest composite number bigger than %d", newnumber, number);
				break;
			}
		}
	}
	
	return 0;
}

int calculate(int x){
	int counter, total = 1;
	for(int i = 2; i < x; i++){
		counter = x % i;
		if(counter == 0){
			total = 0;
		}
	}
	return total;
}
