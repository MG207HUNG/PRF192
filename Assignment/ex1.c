#include <stdio.h>
int main(){
	FILE *fp;
	fp = fopen("baitap1.txt","w");
	
	if(fp==NULL){
		printf("Error!");
		return 0 ;
	}
	int n ;
	printf("Nhap vao so nguyen n :");
	scanf("%d",&n);
	fprintf(fp,"Gia tri n: %d",n);
	
	fclose(fp);
	char s ;
	fp = fopen("baitap1.txt","r");
	if(fp==NULL){
		printf("\nCAN NOT OPEN FILE");
		return 0;
	}
	do{
		s = getc(fp);
		printf("%c",s);
	}
	while (s != EOF);
	fclose(fp);
	return 0;
}