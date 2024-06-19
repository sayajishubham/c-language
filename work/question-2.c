#include<stdio.h>
#include<conio.h>
void main()
{
   int salary;
   int hra=10;
   int da=5;
   int ta=8;
   int total;
   int total_salary;
   printf("Enter a your salary:- ");
   scanf("%d",&salary);
   hra=hra*salary/100;
   da=da*salary/100;
   ta=ta*salary/100;
   total=hra+da+ta;
   total_salary=total+salary;
   printf("Employee total salary:- %d",total_salary);
   	
	
	
	
	
	
	
	getch;
}
