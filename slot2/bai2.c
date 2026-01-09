#include <stdio.h>
int main (){
	double x ; // khai bao kieu gia tri cho x : o day la so thuc ( double hoac float )
	x = 7.8789;
	float y ;
	y = 6.6566 ;
	printf ("x=%5.2f \n", x ) ; // in ra man hinh voi lenh printf . \n = cach dong 
	
	printf ("y=%6.2f",y) ;
	// vi du 5.2 , 5 khong gian c?a no, .2 = in ra ket qua gom co 2 chu so sau giau phay
	return 0;
}