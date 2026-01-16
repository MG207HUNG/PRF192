#include <stdio.h>
int main (){
	int a,b;
	float kq ;
	char pt  ;

	printf("Nhap a,b:");
	scanf("%d,%d",&a,&b);
	printf("Nhap phep toan:");
	scanf(" %c", &pt );
	if(b!=0){
		kq = (float)a/b;
		printf("Ket qua : %d %c %d = %.2f ",a , pt , b , kq); 
	}
	else
		printf("Khong the chia cho 0");
	
}