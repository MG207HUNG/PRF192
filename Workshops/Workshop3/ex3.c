#include <stdio.h>
float calculate_salary(float hours, float rate){
	float salary ;
	salary = hours*rate ;
	if(hours>40){
		salary = 40*rate + (hours-40)*rate*1.5 ;
	}
	return salary ;
}
int main(){
	float hours , rate ;
	printf("Nhap so gio lam :");
	while(scanf("%f",&hours)!=1 || hours < 0 ){
		printf("Vui long nhap so gio lam hop le!:");
		while(getchar()!='\n');
	}
	printf("Nhap tien luong moi gio (VND) :");
	while(scanf("%f",&rate)!=1 || rate < 0 ){
		printf("Vui long nhap tien luong hop le!:");
		while(getchar()!='\n');
	}	
	printf("Luong cua cong nhan theo gio lam la : %.0f VND",calculate_salary(hours,rate));
	return 0;
}
