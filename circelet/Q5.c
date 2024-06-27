#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k,c=5;
	for(i=1;i<=5;i++){
		for(k=1;k<=5-i;k++){
			printf("\t");
		}
		for(j=1;j<=i;j++){
			printf("%d\t",j);
		}
		for(j=i-1;j>=1;j--){
			printf("%d\t",j);
		}
		printf("\n");
	}
}

