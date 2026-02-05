#include <stdio.h>
int main (){
	int n , soDu ;
	int kq = 0;
	printf("Nhap n : ");
	scanf(" %d",&n) ;
	while(n>0){
		soDu = n%10 ;
		n = n/10 ;
		kq = kq*10 + soDu ;
	}
	printf("So dao nguoc cua no la : %d", kq );
	
	return 0;
}