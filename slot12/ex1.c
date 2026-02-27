#include <stdio.h>
int sumOfDivisors(int n){
	int sum = 0 ;
	for(int i = 1 ; i < n/2 ; i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return sum;
}
int getInput(){
	int soInt;
	printf("Nhap so int : " );
	while(scanf("%d",&soInt)!=1 || soInt <= 0){
		printf("Nhap sai!\nNhap lai:");
		fflush(stdin);
	return soInt;
	}
}
int main(){
	int n;
	n = getInput();
	printf("Tong cac uoc so cua n la :%d \n",sumOfDivisors(n));
	return 0;
}