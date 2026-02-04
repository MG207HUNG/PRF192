#include <stdio.h>
int main (){
	float chuyenCan , giuaKy , cuoiKy , tongKet ;
	char diemChu ;
	printf("Nhap diem chuyen can , giua ky , cuoi ky:");
	int kq = scanf("%f %f %f",&chuyenCan,&giuaKy,&cuoiKy);
	printf ("kq nhap la %d \n",kq);
	if(kq !=3 || cuoiKy <0 || giuaKy <0 || cuoiKy <0 || chuyenCan >10 || cuoiKy >10 || giuaKy >10) {
		printf("Nhap sai diem , diem >=0!");
		return 0;
	}
	tongKet = chuyenCan*0.1 + giuaKy*0.3 + cuoiKy*0.6 ;
	if (tongKet<4){
		diemChu = 'F';
		} 
	else if (tongKet<=5.4){
		diemChu = 'D';

	}
	else if (tongKet<=6.9){
		diemChu = 'C';

	}
	else if (tongKet<= 8.4){
		diemChu = 'B';
	}
	else if (tongKet<= 10){
		diemChu = 'A';
	}
	printf("\nDiem so:%.1f \nDiem chu : %c",tongKet,diemChu);
	if ( chuyenCan >=4 && giuaKy >=4 && cuoiKy >= 4 && diemChu != 'F' ){
		printf("\n DU DIEU KIEN TOT NGHIEP");
	} else {
		printf("\n Khong DU DIEU KIEN TOT NGHIEP");
	}
}