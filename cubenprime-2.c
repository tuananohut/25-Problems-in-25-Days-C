#include <stdio.h>

int main(){
	
	int number, control, result = 0, control2;
	
	do{
		printf("Enter a number:");
		scanf("%d", &number);
	}while(number < 0);
	
	control = (number - 4) / 3;
	control2 = (number - 4) % 3;
	
	if(control2 == 0){
		for(int i = 1; i < control; i++){
			if(control == i * (i + 2)){
				result = 1;
				break;
			}
		}
	}
	
	if(result == 1)
		printf("%d is a cuban prime", number);
	
	else
		printf("%d is not a cuban prime", number);
	
	return 0;
	
}
