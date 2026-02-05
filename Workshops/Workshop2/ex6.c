#include <stdio.h>
int main() {
    int n;
    int binary = 0;
    int base = 1;

    printf("Nhap so nguyen duong dang thap phan: ");
    while(scanf("%d", &n)!=1 || n < 0 ){
    	printf("Vui long nhap dung: ");
    	while(getchar()!='\n');
	}
	if(n==0){
	printf("So o he nhi phan la: 0");
		return 0;
	}
    while (n > 0) {
        binary = binary + (n % 2) * base;
        n = n / 2;
        base = base*10;
    }
    printf("So o he nhi phan la: %d", binary);
    return 0;
}
