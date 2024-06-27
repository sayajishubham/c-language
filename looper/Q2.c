#include<stdio.h>
#include<conio.h>
main(){
	int i;
	int count=0;
	printf("Enter Your Digit :");
	scanf("%d",&i);
	for(;i!=0;i/=10){
		count++;
	}
	printf("%d",count);
}

