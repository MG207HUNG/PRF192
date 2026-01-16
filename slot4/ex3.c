#include <stdio.h>
int main(){
	float soThuc ;
	int phanNguyen ;
	float phanThuc ;
	scanf("%f:",&soThuc);
	printf("Gia tri da nhap la: %.4f\n",soThuc);
	phanNguyen = (int)soThuc;
	printf("Phan Nguyen la: %d\n",phanNguyen);
	phanThuc = soThuc - phanNguyen ;
	printf("Phan thuc la :%.4f",phanThuc);
	return 0;
}