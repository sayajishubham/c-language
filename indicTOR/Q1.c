#include <stdio.h>
#include<conio.h>
int stringLength(const char *ptr) {
  int length = 0;
  while (*ptr != '\0') {
    length++;
    ptr++;
  }
  return length;
}

int main() {
  const char *str = "Shubham Sayaji";
  int length = stringLength(str);
  printf("The length of the string is: %d\n", length);
  return 0;
}

