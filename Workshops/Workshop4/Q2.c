#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  float a[2][2];
  
  for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
          scanf("%f", &a[i][j]);
      }
  }

  float d = sqrt(pow(a[1][0] - a[0][0], 2) + pow(a[1][1] - a[0][1], 2));

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  printf("%.4f\n", d);

  if(d == 0){
      printf("Points are coincident\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}