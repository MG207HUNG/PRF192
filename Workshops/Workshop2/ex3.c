#include <stdio.h>
int main (){
	int n , count ,kq;
	count = 1 ;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1|| n<=0 || n > 10){
		printf("Nhap n: ");
		fflush(stdin);
}
	while(count <= n){
			kq = count*n;
			printf("%d * %d = %d \n",count , n ,kq);
			count++;
		}
	return 0;
}