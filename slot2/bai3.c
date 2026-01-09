#include<stdio.h>
int main (){
	float a = 5;
	float b = 10.216 ;
	float kq = a + b ;
	printf ("a = %0.0f \n", a );
	printf ("b = %0.3f \n", b) ;
	printf ("%.0f + %0.3f = %0.2f ", a,b,kq) ;
	return 0;
}