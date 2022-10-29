/*
A pronic number is a number which is the product of two consecutive integers, that is, a 
number of the form n(n + 1). For instance, 42 is pronic because 6*7=42.
Write a program that takes a number from a user and controls whether it is pronic or not. If the 
number is not pronic, find smallest pronic number greater than given number. According to 
control result, program returns an appropriate message. Program terminates when user enters 
-1 otherwise asks new number after each return. Do not forget to control suitability of user’s 
input.
*/

#include <stdio.h>

int main(){
	
	int number, flag;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);

	for(int i = 1; i < number; i++){
		if(i * (i + 1) == number){
			flag = 1;
			break;
		}
	}
	
	if(flag == 1){
		printf("%d is a pronic number", number);
	}
	
	else{
		printf("%d is not a pronic number", number);
	}
	
	return 0;
	
}
