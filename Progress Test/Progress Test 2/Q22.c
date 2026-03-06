#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
	if(n<2)
		return 0;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0 ;
	}
	return 1 ;
}
// Function to print prime number
void displayPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE  
   if(isPrime(n)==1){
   	printf("%d ",n);
   }
}
int main() {
  system("cls");
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
  	int a[n];
  	for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
  }
  int found = 0;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i = 0; i < n; i++){
		if(isPrime(a[i])){
          displayPrime(a[i]);
          found = 1;
		}
	}
	if(found==0){
		printf("Not found");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}