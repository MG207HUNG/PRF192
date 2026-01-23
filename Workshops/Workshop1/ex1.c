#include <stdio.h>
#include <math.h>
//tinh gia tri tuyet doi 
int main (){
	int x ;
	printf("Nhap x : ");
	scanf(" %d", &x);
	int preX = x ;
	if(x<0)
		x = -x;
	printf("|%d| = %d\n", preX , x );
	printf("Can bac 2 la : %.2f", sqrt(x));
	return 0;
}