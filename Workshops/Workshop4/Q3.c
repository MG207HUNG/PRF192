#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  int a[100];
  int even[100];
  int count = 0;
  if(n > 0){
      for(int i = 0; i < n; i++){
          scanf("%d",&a[i]);
      }
      for(int i = 0; i < n; i++){
          if(a[i] % 2 == 0){
              even[count] = a[i];
              count++;
          }
      }
      for(int i = 0; i < count-1; i++){
          for(int j = i+1; j < count; j++){
              if(even[i] < even[j]){
                  int temp = even[i];
                  even[i] = even[j];
                  even[j] = temp;
              }
          }
      }
  }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");  
  if(n <= 0){
      printf("Invalid input\n");
  }
  else{
      for(int i = 0; i < count; i++){
          printf("%d\n", even[i]);
      }
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}