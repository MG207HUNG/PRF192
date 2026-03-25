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
	fgets(a,100,stdin);
	for(int i = 0 ; i<100 ; i++){
		if(a[i]=='\n'){
			a[i]='\0';
		}
	}
	for(int i = 0 ; a[i]!='\0' ;i++){
		if(i==0 || (a[i]!=' ' && a[i-1]==' ')){
			a[i] = toupper(a[i]);
			a[i+1] = toupper(a[i+1]);
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	printf("%s",a);
	

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
