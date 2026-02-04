#include <stdio.h>
int main (){
	int a , b ;
	float kq ;
	char phepToan ;
	int kqNhapSo = scanf("%d,%d", &a , &b);
	fflush(stdin);
	int kqNhapPhepTinh = scanf(" %c",&phepToan);
	if(kqNhapSo!=2 || kqNhapPhepTinh!=1 || phepToan!='+'&& phepToan!='/'&& phepToan!='%'){
		printf("Nhap sai");
		return 0;
	}
	switch(phepToan){
		case'+':
			kq = a + b ;
			break;
		case'%':
			if(b==0){
				printf("Khong the chia cho 0!");
				return 0;
			}
			kq = a % b ;
			break;			
		case'/':
			if(b==0){
				printf("Khong the chia cho 0!");
				return 0;
			}
			kq = (float)a/b; 
			break;
		}
	if(phepToan=='/'){
	printf("%d %c %d = %.2f",a,phepToan,b,kq);
}	else{
	printf("%d %c %d = %.0f",a,phepToan,b,kq);
}
}