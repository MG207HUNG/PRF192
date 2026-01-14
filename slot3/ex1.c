#include <stdio.h>
//1. khai bao 2 bien so nguyen va khoi tao gia tri a,b , tinh + - * / 
//2. khai bao bien ket qua
//Hay in ket qua: + , - , * , /
/* Vd: 
a = 7 
b = 2
a phep toan b  Ket qua
7 + 2 = 9
7 - 2 = 5
7 * 2 = 14
*/
int main (){
	int a = 7 ;
	int b = 2 ;
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	printf("%-1s %-5s %-1s %-5s ", "a" , "phep toan" , "b" , "Ket qua");
	float kq ;
	kq = a + b ;
	printf("\n%d + %d = %.0f \n", a , b , kq);
	kq = a - b ;
	printf("%d - %d = %.0f \n", a , b , kq );
	kq = a * b ;
	printf("%d * %d = %.0f \n", a , b , kq );
	kq = (float)a / b ;
	printf("%d / %d = %0.2f \n", a , b , kq);
	return 0;
}