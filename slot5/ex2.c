#include <stdio.h>
#include <math.h>
// tinh gia tri tuyet doi roi tinh can
int main(){
	float a , b , c , max ;
	printf("nhap a,b,c la :");
	scanf(" %f %f %f",&a , &b , &c);
	max = a ;
	if(max<b)
		max = b ;
	if(mac<c)
		max = c ; 
	printf("So lon nhat la : %0.2f",max);
}