/*
Primes that remain prime when read upside down or mirrored. For instance 1181 is dihedral 
because both 1181 and 1811 are prime numbers.
Write a program that takes a number from a user and controls whether it is Dihedral or not. 
According to control result, program returns an appropriate message. Program terminates 
when user enters -1 otherwise asks new number after each return. Do not forget to control 
suitability of user’s input.
*/
#include <stdio.h>

int primecontrol();
int dihedral();


int main(){
	
	int number, total = 1, newnumber;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 2);
	
	total = primecontrol(number);
	
	if(total == 0){
		newnumber = dihedral(number);
		if (newnumber > 1){
			total = primecontrol(newnumber);
			if(total == 0){
				printf("%d and %d are dihedral primes", number, newnumber);
			}
			else
				printf("%d is not a dihedral prime", number);
		}
		else{
			total = 1;
			printf("%d is not a dihedral prime", number);
		}
	}
	
	else
		printf("%d is not a dihedral prime", number);
	
	return 0;
	
}

int primecontrol(int x){
	
	int counter, total = 0;
	for(int i = 2; i < x; i++){
		counter = x % i;
		if(counter == 0){
			total = 1;
		}
	}
	return total;
	
}

int dihedral(int y){
	
	int mod, sum = 0;
	int newy = y;
	
	while(newy != 0){
		mod = newy % 10;
		if(mod == 3 || mod == 4 || mod == 6 || mod == 7 || mod == 9){
			break;
		}
		else if(mod == 2){
			mod = 5;
			sum = sum * 10 + mod;
		}
		else if(mod == 5){
			mod = 2;
			sum = sum * 10 + mod;
		}
		else{
			sum = sum * 10 + mod;
		}
		newy = newy / 10;
	}
	
	return sum;
}
