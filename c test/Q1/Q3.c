#include <stdio.h>
#include<conio.h>
void reverse_string(char* str) {
    char a;
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }
}

int main() {
    char str[] = "Shubham Sayaji";
    printf("Original string: %s\n", str);
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
