#include <stdio.h>
int sumOfDivisors(int n){
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return sum;
}
int maxOf3(int a , int b , int c){
	return ( a>b?(a>c?a:c):(b>c?b:c));
}
void printASCII(){
	for(char c = 'A'; c<='Z';c++){
		printf("%c : %d\n",c,c);
	}
}
int main(){
	int n ;
	int a,b,c;
	printf("Nhap n :");
	scanf("%d",&n);
	printf("Tong cac uoc so cua n la :%d \n",sumOfDivisors(n));
	printf("Nhap 3 so :");
	scanf("%d,%d,%d",a,b,c);
	printf("So lon nhat trong 3 so la :%d \n",maxOf3(a,b,c));
	printf("Ma ASCII cua cac ki tu tu A->Z la : " );
	printASCII();
	return 0;
}