#include<stdio.h>
#include<conio.h>
main(){
	int i;
	int count=0;
	for(i=65;i<=92;i=i+4){
		printf("%c \n",i);
		count++;
	}
	printf("Number Of Alphabet printed :%d",count);
}
