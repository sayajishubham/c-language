#include<stdio.h>
#include<conio.h>
int add(int a,int b){
	return a + b;
}
int sub(int a,int b){
	return a - b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int main(){
	printf("\n press 1 for +");
	printf("\n press 2 for -");
	printf("\n press 3 for *");
	printf("\n press 4 for /");
	printf("\n press 0 for exiting");
	int choice,a,b;
	printf("Enter your choice :");
	scanf("%d",&choice);
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	
	switch(choice){
		case 1:
			add(a,b);
			printf("Your Sum for %d and %d is %d",a,b,add(a,b));
			break;
		case 2:
			sub(a,b);
			printf("Your subtraction for %d and %d is %d",a,b,sub(a,b));
			break;
		case 3:
			mul(a,b);
			printf("Your Multiplication for %d and %d is %d",a,b,mul(a,b));
			break;
		case 4:
			div(a,b);
			printf("Your div for %d and %d is %d",a,b,div(a,b));
			break;
		default:
			printf("you have Exited :)");
			break;
	}
}
