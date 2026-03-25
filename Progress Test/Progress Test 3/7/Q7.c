#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int n){
	if(n<2){
		return 0;
	}
	if(n==2){
		return 1;
	}
	if(n%2==0){
		return 0;
	}
	for(int i = 3 ; i*i <=n ; i=i+2){
		if(n%i==0){
			return 0;
		}
	}
	return 1 ;
}
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n ;
	scanf("%d",&n);
	int count = 0;

	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
		for(int i = n ; count < 4 ; i++){
		if(isPrime(i)==1){
			printf("%d\n",i);
			count++;
		}
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
