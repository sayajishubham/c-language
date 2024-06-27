#include<stdio.h>
#include<conio.h>
main(){
	int i;
	printf("Enter your Digit :");
	scanf("%d",&i);
	int last=i%10;
	do{
		i=i/10;
	}while(i>=10);
	int first=i;
	int sum=first+last;
	printf("Your sum is :%d",sum);
}
