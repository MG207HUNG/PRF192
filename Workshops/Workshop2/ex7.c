#include <stdio.h>
int main (){
	int n , a ;
	a = 0 ;
	printf("Nhap so n :");
	while(scanf("%d",&n)!=1){
		printf("Sai!,Vui long nhap so nguyen n :");
		while(getchar()!='\n');
}	
	if(n<0){
	printf(" %d khong phai la so chinh phuong",n);
	return 0;
}
	while(a*a<=n){
		if(a*a==n){
		printf(" %d la so chinh phuong",n);
		return 0;
	}
		a++;	
	}
printf("%d khong phai la so chinh phuong",n);
return 0;
}

	