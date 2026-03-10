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
  int printed[100]={0};
  int found = 0;

  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
  }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  
  for(int i=0;i<n;i++){
      if(a[i]%2==0 && printed[i]==0){
          
          int count=0;
          
          for(int j=0;j<n;j++){
              if(a[j]==a[i]){
                  count++;
                  printed[j]=1;
              }
          }
          
          printf("%d-%d\n",count,a[i]);
          found = 1;
      }
  }

  if(found==0){
      printf("Not found\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}