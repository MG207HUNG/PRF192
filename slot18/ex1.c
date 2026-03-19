#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
	int x;
	int y;
}Point;
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	Point p1 = {5,-10};
	// p1.x = 5 ; p1.y = 5
	Point p2 ;
	scanf("%d",&p2.x);
	scanf("%d",&p2.y);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	printf("(%d,%d)\n",p1.x,p1.y);
	printf("(%d,%d)",p2.x,p2.y);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
