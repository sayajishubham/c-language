#include <stdio.h>
#include<string.h>
#include <string.h>
void printFrequency(int a[])
{
	for (int i = 0; i < 26; i++) 
	{
		if (a[i] != 0) 
		{
			printf("%c - %d\n",i + 'a', a[i]);
		}
	}
}
void findFrequncy(char S[])
{
	int i = 0;

	int a[26] = { 0 };

	while (S[i] != '\0') {

		a[S[i] - 'a']++;
		i++;
	}
	printFrequency(a);
}
int main()
{
	char S[100];
	printf("enter your string :");
	scanf("%s",&S);
	findFrequncy(S);
}


