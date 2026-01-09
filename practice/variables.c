#include <stdio.h>
#include <stdbool.h>
int main (){
	int year = 2007 ;
	int age = 18 ;
	int soluong = 3 ;
	printf("%d la nam sinh cua toi \n", year) ;
	printf("tuoi cua toi la %d\n" , age );
	printf("toi co %d cai noi com dien \n", soluong) ;
	float Diem = -9.8 ;
	float Gia = 30;
	/*float va double cung la kieu so thuc , tuy nhien 
	float chi luu duoc toi da 6 chu so sau dau thap phan , ví dụ */
	float pi = 3.1415926535;
	printf ("So pi la: %f \n", pi);
	// ket qua cua pi tra ve la 3.141593 
	// double trong truong hop nay se thich hop va chinh xac hon , double luu dc den 15  , vd : 
	// %f = float , %lf = long float = double 
	double Pi = 3.1415926535;
	printf ("So pi la : %.10lf \n", Pi);
	double e = 2.718281828459045;
	printf ("e= %.15lf \n",e);
	char grade = 'A';
	char okela = '?';
	printf("Your Grade is %c\n", grade);
	printf("that luon %c \n", okela);
	// luu y : char dung cho 1 ki tu duy nhat phai dung giau ' ' 
	char name[] = "Hung Vo";
	char mail[] = "Email1231321@gmail.com";
	printf("Xin chao %s \n", name );
	printf("Email cua ban la %s \n" ,mail ) ;
	// Chuoi ki tu cua ban co the bao gom ca number , tuy nhien no chi coi chung la cac ki tu , vay nen chung ta se khong the tinh toan voi no
	// khi in thi neu la true , se in ra 1 , false ra 0 , tuy nhien khong ai in lam gi ca....
	// 0 = false ; 1 = true , vi du :
	bool online = false ;
	if (online){
		printf("Ban dang online");
	}
	else{
		printf("Ban dang offline\n");
	}
	bool answer = 1 ;
	if (answer){
		printf("Ban tra loi dung");
	}
	else{
		printf("Ban tra loi sai");
	}
	return 0;
}