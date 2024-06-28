#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char str1[30];
	char str2[30];
	printf("Enter your String to check for palindrome :");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0){
		printf("This is an palindrome :)");
	}
	else{
		printf("Thi snot an Palindrome :(");
	}
}

