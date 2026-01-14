#include <stdio.h>
/*2. Khai bao kieu ki tu ten kt , khoi gan gia tri cho bien nay
In ra : gia tri cua bien :
Gia tri thap phan , gia tri hex , gia tri octal
kich thuoc kieu 



*/
int main(){
	char kt = 'C';
	printf("%-16s %-16s %-16s %-16s %-16s %s\n" ,"Ten Bien" , "Gia tri" , "Dec" , "Hex" , "Oct" , "Size");
	printf("%-16s %-16c %-16d %-16x %-16o %-16d" , "kt" , kt , kt , kt , kt , sizeof(kt));
	return 0;
}