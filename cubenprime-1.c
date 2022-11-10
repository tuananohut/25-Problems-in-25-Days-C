#include <stdio.h>

int main(){
	
	int number, control, result = 0;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	control = (number - 1) / 3;
	
	for(int i = 1; i < control; i++){
		if(control == i * (i+1)){
			result = 1;
			break;
		}
	}
	
	if(result == 1)
		printf("%d is a cuban prime", number);
	
	else
		printf("%d is not a cuban prime", number);
	
	return 0;
	
}
