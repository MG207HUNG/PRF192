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
	
	int len = count ; 
	if(a[len-1]=='\n'){
		a[len-1]='\0';
		len --;
	}
	int i = 0;
	int j = len - 1 ;
	
	while(i<j){
		char temp = a[i];
		a[i] = a[j];
		a[j] = temp ;
		
		i++ ;
		j-- ;
	}
	printf("%s",a);
	
	
	
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
