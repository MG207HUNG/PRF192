#include <stdio.h>
#include <math.h>
int main (){
	float cC , gK , cK ,tD ;
	char chuCai ;
	printf("Diem chuyen can :");
	if(scanf(" %f", &cC)!=1){
		printf("Nhap sai");
		return ;
	}
	printf("Diem chuyen can :");
	if(scanf(" %f", &gK)!=1){
		printf("Nhap sai");
		return ;
	}
	printf("Diem chuyen can :");
	if(scanf(" %f", &cC)!=1){
		printf("Nhap sai");
		return ;
	}
	tD = cC*0.1 + gK*0.3 + cK*0.6 ;
	if (tD<4){
		chuCai = 'F';
		printf("Diem TB la : %c",chuCai);
	}
	if (tD>= 4 && tD<=5.4){
		chuCai = 'D';
		printf("Diem TB la : %c",chuCai);
	}
	if (tD>= 5.5 && tD<=6.9){
		chuCai = 'D';
		printf("Diem TB la : %c",chuCai);
	}
	if (tD>= 7 && tD<= 8.4){
		chuCai = 'D';
		printf("Diem TB la : %c",chuCai);
	}
	if (tD>= 8.5 && tD<= 10){
		chuCai = 'D';
		printf("Diem TB la : %c",chuCai);
	}
}