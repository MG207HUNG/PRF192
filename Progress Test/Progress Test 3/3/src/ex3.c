#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n ;
	int sum = 0 ;
	int invalid = 0 ;
	if(scanf("%d",&n)!=1){
		invalid = 1 ;
	}
	if(n<0){
		n=-n;
	}
	while(n>0){
		sum = sum +n%10;
		n = n/10;
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(invalid==1){
		printf("-1");
	}else{
		printf("%d",sum);
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
