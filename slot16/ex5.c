#include <stdio.h>

int hoanDoiHaiSoNguyen(int *a,int *b){
	int temp = *a;
	*a = *b ;
	*b = temp ;
}
int hoanDoiBaSoNguyen( int *a, int *b , int*c){
	int temp = *a;
	*a = *c ;
	*c = *b ;
	*b = temp ;
}

int main(){
	int a ,b , x, y , z ;
	printf(" Nhap 2 so muon hoan doi : ");
	scanf("%d%d",&a,&b);
	hoanDoiHaiSoNguyen(&a,&b);
	printf( " 2 So sau khi hoan doi la : %d %d \n ",a,b);
	printf(" Nhap 3 so muon hoan doi :  ");
	scanf("%d%d%d",&x,&y,&z);
	hoanDoiBaSoNguyen(&x,&y,&z);
	printf(" 3 So sau khi hoan doi la : %d %d %d\n",x,y,z);
}