#include <stdio.h>
typedef struct {
	int id;
	char name[30];
	float grade ;
}Sinhvien;
int main(){
	FILE *fp = NULL;
	fp = fopen("baitap3.txt","w");
	if(fp==NULL){
		printf("Error!\n");
		return 1 ;
	}
	Sinhvien sv1;
	printf("Nhap id cua sv 1 :");
	scanf("%d",&sv1.id);
	while(getchar()!='\n');
	printf("Nhap name cua sv 1 :");
	fgets(sv1.name,30,stdin);
	printf("Nhap grade cua sv 1 :");
	scanf("%f",&sv1.grade);
	fprintf(fp,"%d\n%s%.1f",sv1.id,sv1.name,sv1.grade);
	fclose(fp);
	printf("\n Done <3 \n");
	fp = fopen("baitap3.txt","r");
	if(fp==NULL){
		printf("Not Open file");
		return 1 ;
	}
	printf("ID:");
	if(fscanf(fp,"%d",&sv1.id)!= EOF){
		printf("%d\n",sv1.id);
	}
	fgetc(fp);
	printf("Name:");
	if(fgets(sv1.name,30,fp))
{
		printf("%s",sv1.name);
	}
	printf("Grade: ");
	if(fscanf(fp,"%f",&sv1.grade)!= EOF){
		printf("%.1f",sv1.grade);
	}
	return 0;
}