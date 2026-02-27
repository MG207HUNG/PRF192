#include <stdio.h>
float maxOf3(float a, float b, float c) {
    float max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
float getInput(){
	float soThuc;
	printf("Nhap so thuc : " );
	while(scanf("%f",&soThuc)!=1 || soThuc <= 0){
		printf("Nhap sai!\nNhap lai:");
		while(getchar()!='\n');
	}
	return soThuc;
}
int main(){
	float a,b,c;
	a = getInput();
	b = getInput();
	c = getInput();
	printf("So lon nhat trong 3 so la : %.2f ",maxOf3(a,b,c));
	return 0;
}