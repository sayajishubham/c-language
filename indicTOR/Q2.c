#include <stdio.h>
#include<conio.h>
void find_cubes(int (*ptr)[2], int row, int col) {
	int j,i;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            int num = *(ptr+i*col+j);
            int cube = num * num * num;
            printf("%d ", cube);
        }
    }
}

int main() {
    int row, col,i,j;
    printf("Enter array's size: ");
    scanf("%d", &row);
    col = row;
    int arr[row][col];
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int (*ptr)[2] = arr;
    printf("Cubes of all elements: ");
    find_cubes(ptr, row, col);
    return 0;
}
