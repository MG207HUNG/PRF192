#include <stdio.h>
int main (){
	int a0,b0,a,b,soDu;
	
	printf("Nhap 2 so nguyen a,b: ");
	while(scanf("%d,%d",&a,&b)!=2 ){
		printf("Nhap lai:");
		while(getchar()!='\n');
	}
	a0=a;
	b0=b;
	if(a<0){
	a = -a;
}
	if(b<0){
	b = -b;
}
	while(b!=0){
		soDu=a%b;
		a=b;
		b=soDu;
	}
	printf(" %d la uoc chung lon nhat cua %d va %d ",a,a0,b0);
}