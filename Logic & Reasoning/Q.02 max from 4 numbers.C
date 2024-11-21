#include<stdio.h>

int main(){
	int num1 , num2 , num3 , num4 ;
	
	printf("ENTER A VALUE OF THE FIRST NUMBER :");
	scanf("%d",&num1);
	
	printf("ENTER A VALUE OF THE SECOND NUMBER :");
	scanf("%d",&num2);
		
	printf("ENTER A VALUE OF THE THREE NUMBER :");
	scanf("%d",&num3);
	
	printf("ENTER A VALUE OF THE FORTH NUMBER :");
	scanf("%d",&num4);
	
    if (num1 >= num2 && num1 >= num3 && num1 >= num4){
		printf("THE MINIMAM VALUE IS %d",num1);
	}
	else if(num2 >= num3 && num2 >= num4){
		 printf("THE MINIMUM VALUE IS: %d\n", num2);
	}
	else if(num3>num4){
			printf("THE MINIMAM VALUE IS %d",num3);
	}
	else{
		printf("THE MINIMAM VALUE IS %d",num4);
	}
}
