#include <stdio.h>
int main (){
	float cC , gK , cK ,tD ;
	char chuCai ;
	printf("Diem chuyen can :");
	if(scanf(" %f", &cC)!=1 || cC <0 || cC > 10){
		printf("Nhap sai");
		return ;
	}
	printf("Diem giua ky :");
	if(scanf(" %f", &gK)!=1 || gK <0 || gK > 10){
		printf("Nhap sai");
		return ;
	}
	printf("Diem cuoi ky :");
	if(scanf(" %f", &cK)!=1 || cK <0 || cK > 10){
		printf("Nhap sai");
		return ;
	}
	tD = cC*0.1 + gK*0.3 + cK*0.6 ;
	if (tD<4){
		chuCai = 'F';
		} 
	else if (tD<=5.4){
		chuCai = 'D';

	}
	else if (tD<=6.9){
		chuCai = 'C';

	}
	else if (tD<= 8.4){
		chuCai = 'B';
	}
	else if (tD<= 10){
		chuCai = 'A';
	}
	if ( cC >=4 && gK >=4 && cK >= 4 && chuCai != 'F' ){
		printf("Ban da du dieu kieu tot nghiep\n");
		printf("Diem TB la : %c",chuCai);
	} else {
		printf("Ban da truot tot nghiep \n");
		printf("Diem TB la : %c",chuCai);
	}
}