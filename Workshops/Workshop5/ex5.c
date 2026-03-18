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
	char tuCanThay;
	char tuThay;
	int count = 0 ;
	fgets(a,sizeof(a),stdin);
	scanf(" %c",&tuCanThay);
	scanf(" %c",&tuThay);
	for(int i = 0 ; a[i]!='\0' ; i++){
		if(a[i]==tuCanThay){
			a[i] = tuThay;
			count ++;
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	printf("%d\n",count);
	printf("%s",a);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
