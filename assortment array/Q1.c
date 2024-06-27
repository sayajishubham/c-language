#include <stdio.h>
#include<conio.h>
main() {

  int a[5];
  int i;
  printf("Enter 5 integers: ");

  for(i = 0; i < 5; ++i) {
     scanf("%d", &a[i]);
  }

  printf("Displaying integers: ");

  for(i = 0; i < 5; ++i) {
    if(a[i]<0){
    	printf("%d\n", a[i]);
	}
  }
}

