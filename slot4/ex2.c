#include <stdio.h>
int main(){
	float num ;
	printf("Nhap so thuc: ");
	scanf("%f:",&num);
	printf("Gia tri da nhap la: %.4f\n",num);
	int a = num;
	printf("Phan Nguyen la: %d\n",a);
	float b = num - a ;
	printf("Phan thuc la :%.4f",b);
	return 0;
}