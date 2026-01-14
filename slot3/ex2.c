#include <stdio.h>
/*2. Khai bao kieu ki tu ten kt , khoi gan gia tri cho bien nay
In ra : gia tri cua bien :
Gia tri thap phan , gia tri hex , gia tri octal
kich thuoc kieu 



*/
int main(){
	char kt1 = 'C' ,kt2 = '0' , kt3 = 'Z' , kt4 ='B' , kt5 ='i';
	printf("%-16s|%-16s|%-16s|%-16s|%-16s|%s\n" ,"Ten Bien" , "Gia tri" , "Dec" , "Hex" , "Oct" , "Size");
	printf("%-16s|%-16c|%-16d|%-16x|%-16o|%-16d\n" , "kt1" , kt1 , kt1 , kt1 , kt1 , sizeof(kt1));
	printf("%-16s|%-16c|%-16d|%-16x|%-16o|%-16d\n" , "kt2" , kt2 , kt2 , kt2 , kt2 , sizeof(kt2));
	printf("%-16s|%-16c|%-16d|%-16x|%-16o|%-16d\n" , "kt3" , kt3 , kt3 , kt3 , kt3 , sizeof(kt3));
	printf("%-16s|%-16c|%-16d|%-16x|%-16o|%-16d\n" , "kt4" , kt4 , kt4 , kt4 , kt4 , sizeof(kt4));
	printf("%-16s|%-16c|%-16d|%-16x|%-16o|%-16d\n" , "kt5" , kt5 , kt5 , kt5 , kt5 , sizeof(kt5));
}