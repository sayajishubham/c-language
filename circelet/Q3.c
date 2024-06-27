#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k;
	int c=5;
	for(i=1;i<=5;i++){
		for(k=4;k>=i;k--){
			printf("\t");
		}
		for(j=1;j<=i;j++){
			printf("%d \t",j);
		}
		printf("\n");
	}
}
