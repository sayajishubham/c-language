#include<stdio.h>
#include<conio.h>
main(){
	int arr[4]={1,2,3,4};
	int i;
	int max=0;
	for(i=0;i<4;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("Your max is %d",max);
}
