#include <stdio.h>
int main(){
	FILE *fp = NULL;
	fp = fopen("baitap2.txt","w");
	
	if(fp==NULL){
		printf("Error!");
	}
	
	int n;
	printf("Nhap so phan tu co trong mang:");
	scanf("%d",&n);
	fprintf(fp,"%d\n",n);
	
	int arr[n];
	printf("Nhap vao cac phan tu cua mang:");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
		fprintf(fp,"%d\t",arr[i]);
	}
	fclose(fp);
	
	fp = fopen("baitap2.txt","r");
	if(fp == NULL){
		printf("\nCAN NOT OPEN FILE");
		return 0;
	}
	printf("Noi dung cua file:\n");
	int m;
	if(fscanf(fp, "%d",&m)!=EOF){
		printf("%d\n",m);
	}
	while(fscanf(fp,"%d",&m)!=EOF){
		printf("%d\t",m);
	}
	
	fclose(fp);
	
	
}