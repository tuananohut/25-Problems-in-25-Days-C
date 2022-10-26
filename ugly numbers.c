/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. For instance, 300 is ugly 
number because 300 = 2 * 2 * 3 * 5 * 5.
Write a program that takes a number from a user and controls whether it is ugly or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int main(){
	
	int number, counter = 1, inum;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	inum = number;
	
	while(inum != 1){
		
		if(inum % 5 == 0){
			inum = inum / 5;	
		}
		
		else if(inum % 3 == 0){
			inum = inum / 3;
		}
		
		else if(inum % 2 == 0){
			inum = inum / 2;
		}
		
		else{
			counter = 1;
			break;
		}	
	}
	
	if(counter == 0)
		printf("%d is an ugly number", number);
	
	else
		printf("%d is not an ugly number", number);
			
	return 0;
}
