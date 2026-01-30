#include <stdio.h>
int main(){
	int thang , quy ;
	printf ("Nhap thang:");
	int kqNhap = scanf(" %d",&thang);
	// neu dua lenh scanf vào , thì nó phải dua scanf vao vi tri dau tien , de gan gia tri cho bien thang 
	if ( kq != 1 || thang <1 || thang > 12);
	printf("nhap sai");
	return 0;
	
switch(thang){
	case 1:
	case 2:
	case 3:
		quy = 1;
		break ;
	case 4:
	case 5:
	case 6:
		quy = 2;
		break ;
	case 7:
	case 8:
	case 9:
		quy = 3;
		break;
}
printf("Thang %d thuoc quy %d",thang, quy);
}