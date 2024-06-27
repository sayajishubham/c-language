#include<stdio.h>
#include<conio.h>
main(){
	int i,j;
	int c=11;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",c++);
		}
		printf("\n");
	}
}
