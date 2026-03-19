#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
	int id;
	char name[100];
	double price;
}Book;
void enterBookStatus(Book b[100], int n){
	for(int i = 0; i < n ; i ++){
		printf("Book %d id :",i+1);
		scanf("%d",&b[i].id);
		getchar();
		printf("Book %d name :",i+1);
		fgets(b[i].name,100,stdin);
		b[i].name[strcspn(b[i].name, "\n")] = '\0';
		printf("Book %d price :",i+1);
		scanf("%lf",&b[i].price);
		getchar();
		printf("\n");
	}
}
void theMostExp(Book b[100],int n){
	double max = b[0].price;
	for(int i = 0 ; i < n ; i++){
		if(b[i].price > max){
		max = b[i].price ;
		}
	}
	printf("The Most Expensive Book(s) :\n");
	for(int i = 0 ; i < n ; i++){
	if(b[i].price == max ){
		printf("Book ID :%d\n",b[i].id);
	}
}
}
void findBookByID(Book b[100],int n,int bookID ){
	int found = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(b[i].id==bookID){
			printf("\nBook Index :\n");
			printf("%d",i+1);
			found = 1 ;
			break ;
		}
	}
		if(found != 1){
			printf("\nNot found");
}
}
void sortAsPrice(Book b[100],int n){
	for(int i = 0 ; i < n -1 ; i++){
		for(int j = i + 1 ; j < n ; j ++){
			if(b[i].price>b[j].price){
			Book temp = b[i];
			b[i] = b[j];
			b[j] = temp ;
			}
		}
}
}
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n ;	
  	Book b[100];
  	scanf("%d",&n);
	enterBookStatus(b,n);
	int bookID;
	printf("Enter ID to find Book :");	
	scanf("%d",&bookID);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	theMostExp(b,n);
		printf("\n-------------------------------------------\n");
	printf("The book index is: \n");
	findBookByID(b,n,bookID);
		printf("\n-------------------------------------------\n");
	sortAsPrice(b,n);

	printf("Book list after sorted : \n");
	for(int i = 0 ; i < n ; i ++){
		printf("Book id:%d\n",b[i].id);
		printf("Book name:%s\n",b[i].name);
		printf("Book price:%.2lf\n",b[i].price);
		printf("\n");
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
