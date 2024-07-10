#include<stdio.h>
#include<conio.h>
main(){
	int arr[3]={1,2,3};
	int i,sum;
	for(i=0;i<3;i++){
		sum=arr[i]*arr[i];
		printf("\nSquare of arr[%d] : %d",i,sum);
	}
}
