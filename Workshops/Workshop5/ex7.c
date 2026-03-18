#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[1000];
	int digits = 0 , letters = 0 , other = 0 ;
    fgets(a, sizeof(a), stdin);

	for(int i = 0 ; a[i]!='\0' ;i++){
		if(isdigit(a[i])){
			digits++;
		}
		else if(isalpha(a[i])){
			letters++;
		}
		else if(a[i]!='\n'){
			other++;
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
    printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", other);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
