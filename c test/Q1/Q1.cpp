#include<stdio.h>
#include<conio.h>
main(){
	char ch;
	printf("enter your name :");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("IS vowel");
			break;
		default :
			printf("Is constant");
	}
}
