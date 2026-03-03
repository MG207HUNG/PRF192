#include <stdio.h>
float calculate_taxi_fare(float distance){
	float fare = 0;
	if(distance==0){
		fare = 0;
	}else if(distance <= 1 ){
		fare = 15000;
	}else if(distance <= 30){
		fare = 15000 + (distance-1)*12000;
	}else{
		fare = 15000 + 29*12000 + (distance-30)*10000;
	}
	return fare ;
	}
int main(){
	float distance ;
	printf("So km Taxi di duoc la :");
	while(scanf("%f",&distance)!=1 || distance <0){
		printf("Vui long nhap so km hop le! :");
		while(getchar()!='\n');
}

	printf("Tien cuoc Taxi la : %.0f VND",calculate_taxi_fare(distance));	
	return 0;
}
