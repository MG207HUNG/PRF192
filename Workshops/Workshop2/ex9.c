#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n;
    int min = 1;
    int max = 100;
    printf("------GameDoanSo-------\n");
    int soNgauNhien = (rand() % (max - min + 1)) + min;
	printf("Doan so trong doan tu 1 -> 100 :");
	while(scanf("%d",&n)!=1 || n>100 || n<1){
		printf("Vui long nhap so nguyen tu 1 ->100 :");
		while(getchar()!='\n');
	}
    while(n!=soNgauNhien){
    	if(n<soNgauNhien){
    		printf("Lon hon, nhap lai : ");
		}
		else{
    		printf("Be hon , nhap lai : ");
		}
		while(scanf("%d",&n)!=1 || n>100 || n<1){
		printf("Vui long nhap so nguyen tu 1 ->100 :");
		while(getchar()!='\n');
	}
	}
	printf("Ban da doan dung , so can doan la %d",soNgauNhien);
    return 0;
}