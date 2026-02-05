#include <stdio.h>
int main(){
	int n ;
	int tong = 0 ;
	printf("Nhap n :");
	while(1){
		while(scanf("%d",&n)!=1 || n <0 ){
			printf("Nhap sai , nhap lai :  ");
			while(getchar()!='\n');
		}
		if(n==0){
		break;
	}
	printf("Nhap n :");
	tong = tong + n;
	}
	printf("Tong la :%d",tong);
}


