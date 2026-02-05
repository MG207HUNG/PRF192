#include <stdio.h>
int main(){
	int soDu,tienRut ;
	soDu = 10000000;
	printf("-------ATM mo phong-------\n");
		while(soDu>0){
			printf("So du cua ban la : %d\n",soDu);
			printf("Nhap so tien ban muon rut(nhap 0 de thoat):");
			while(scanf("%d",&tienRut)!=1 || tienRut<0){
				printf("Vui long nhap so tien rut dung : ");
				while(getchar()!='\n');
			}
			if(tienRut==0){
			printf("Thoat\n");
				return 0;
			}
			if(tienRut<=soDu){
			soDu=soDu-tienRut;
			printf("Ban da rut : %d\n",tienRut);
		}
			else{
				printf("So du khong du(thoat)");
				return 0;
		}
	}
		if(soDu==0){
			printf("So du cua ban la : %d \n",soDu);
			printf("So du khong du de rut them ");
			return 0;
		}

	return 0;
}
