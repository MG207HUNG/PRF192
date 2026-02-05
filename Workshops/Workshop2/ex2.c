#include <stdio.h>
#include <math.h>
int main(){
	float n ;
	int count =0 ;
	//Cach 1 :
	while ( count <5 ){
		printf("Nhap vao n:");
	while ( scanf("%f",&n)!=1 ||n <= 0 || n >1000){
		printf("Nhap vao n:");
		fflush(stdin);
	}
	printf("Can bac 2 cua n la : %.2f \n",sqrt(n));
	count++;
	}
	/*Cach 2 :
	while(1){
		if(count<5){
		printf("Nhap vao n:");
		while ( scanf("%f",&n)!=1 ||n <= 0 || n >1000){
		printf("Nhap vao n:");
		while(getchar()!='\n');
	}
	printf("Can bac 2 cua n la : %.2f \n",sqrt(n));
	count++;
		}
		else{
			break;
		}
	}*/
	printf("Da xong , xuat sac");
}