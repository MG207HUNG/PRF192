#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[100];
	fgets(a,sizeof(a),stdin);
	int count = 0 ;
	while(a[count]!='\0' && a[count]!='\n'){
		count++;
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	
	for(int i = count - 1; i >= 0 ; i--){
		printf("%c",a[i]);
	}
	
	
	
	
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
