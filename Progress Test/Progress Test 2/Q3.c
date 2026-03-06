#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

void findRowMin(int a[ROWS][COLS], int result[ROWS]) {

    for(int i = 0; i < ROWS; i++) {
        int min = a[i][0];   
        for(int j = 1; j < COLS; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
            }
        }
        result[i] = min;  
    }
}
void displayResults(int result[ROWS]) {
    for(int i = 0; i < ROWS; i++) {
        printf("%d\n", result[i]);
    }
}
int main() {
  system("cls");
  printf("INPUT:\n");
	
  int a[ROWS][COLS];
  int result[ROWS];

  // nhap gia tri cua cac phan tu cua ma tran
  for(int i = 0; i < ROWS; i++) {
      for(int j = 0; j < COLS; j++) {
          scanf("%d", &a[i][j]);
      }
  }

  // tìm min mỗi hàng
  findRowMin(a, result);

  // OUTPUT
  printf("\nOUTPUT:\n");
  displayResults(result);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}