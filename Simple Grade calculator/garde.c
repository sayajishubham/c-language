#include<stdio.h>
#include<conio.h>
main(){
	int a;
	printf("Enter your Score :");
	scanf("%d",&a);
	
	if(a<=100 && a>=90){
		printf("Your Grade is A.Excellent work! You are eligible for the next level.");
	}
	else if(a<=89 && a>=60){
		printf("Your Grade Is B.Well done ,You are eligible for the next level.");
	}
	else if(a<=59 && a>=50){
		printf("Your Grade is C.Good job,You are eligible for the next level.");
	}
	else if(a<=49 && a>=40){
		printf("Your Grade is D.You Passed But could do better,You are eligible for the next level.");
	}
	else{
		printf("Your Grade is F.Sorry You failed,You are not eligible for the next level.");
	}
}
