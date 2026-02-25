#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int x,y,sum;
	sum = 0;
	do{
	scanf("%d",&x);
  	scanf("%d",&y);
  }while(x>y);
  for(int count = x ; count <= y ; count++){
  		if(count % 2 != 0){
  			sum = sum + count;
		  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",sum);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
