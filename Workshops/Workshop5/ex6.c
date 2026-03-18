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
	scanf(" %d",&n);
	while(getchar()!='\n');
	int a[10][1000];
	for(int i = 0 ; i < n ; i ++){
		fgets(a[i],sizeof(a[i]),stdin);
		a[i][strcspn(a[i], "\n")] = '\0';
	}
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(a[i], a[j]) > 0){
                char temp[1000];
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	for(int i = 0; i < n; i++){
        printf("%s", a[i]);
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
