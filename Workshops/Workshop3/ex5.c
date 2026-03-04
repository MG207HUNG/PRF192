#include <stdio.h>
int is_prime(int n){
    if(n < 2) {
	return 0;
}
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int a, b ;
	while(1){
    	printf("Nhap a: ");
			while(scanf("%d",&a)!=1){
	        printf("Nhap sai , nhap lai a : ");
        while(getchar()!='\n');
}
	    printf("Nhap b: ");
			while(scanf("%d",&b)!=1){
	        printf("Nhap sai , nhap lai b : ");
}
if(a<b){
	break;
}
	printf("a phai be hon b . Nhap lai\n ");
	while(getchar()!='\n');
}
    printf("Cac so nguyen to trong doan [ %d , %d] la: ",a,b);
    for(int i = a; i <= b; i++){
        if(i != 2 && i % 2 == 0)
            continue;
        if(is_prime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}