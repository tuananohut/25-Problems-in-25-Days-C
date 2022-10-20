/*
In number theory, an abundant number or excessive number is a number for which the sum of 
its proper divisors is greater than the number. The integer 12 is the first abundant number. Its 
proper divisors are 1, 2, 3, 4 and 6 for a total of 16. 
Write a program that takes a number from a user and controls whether it is abundant or not. If 
the number is not abundant, find smallest abundant number greater than given number. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/

#include <stdio.h>

int mycontrol();

int main(){
	
	int number,i;
	int newabundant = 0;
	
	do{
		printf("Enter a number:");
		scanf("%d",&number);
	}while(number <= 0);

	int abundant = mycontrol(number);
	
	if (abundant > number){
		printf("%d is a abundant number.",number);
	}
	else{
		printf("%d is not a abundant number.\n",number);
		for(i = number ; i > newabundant; i++){
			newabundant = mycontrol(i);
		}
		printf("%d is the smallest number greater than %d.", i - 1, number);
	}
	
	
	return 0;
}
	
int mycontrol(int x){
	int abundant = 0;
	for (int i = 1; i < x; i++){
		int result = x % i;
		if (result == 0){
		abundant = abundant + i;
		}
	}
	return abundant;
}	
