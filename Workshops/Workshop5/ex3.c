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
	int n = 0;
	fgets(a,sizeof(a),stdin);
	while(a[n]!='\0'&& a[n]!='\n'){
		n++;
	}
	int isPali = 1 ;
	int i = 0;
	int j = n - 1 ;
	while(i<j){
		if(tolower(a[i])!=tolower(a[j])){
			isPali = 0 ; 
			break;
		}
		i++;
		j--;
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	if(isPali==0){
		printf("No");
	}else{
		printf("Yes");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
