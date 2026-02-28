#include <stdio.h>
int is_leap_year(int year){
	if((year%4==0 && year%100!=0) || year%400 == 0 ){
		return 1;
	}else{
		return 0;
}
}
int get_days_in_month(int month, int year){
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if(is_leap_year(year)){
            	return 29;
			}
			else{
				return 28;
			}
		default:
			return -1;
    }
}
int main(){
	int year , month ;
	printf("Enter year:");
	while(scanf("%d",&year)!=1 || year<=0 ){
		printf("Invalid Year , Enter Again:");
		while(getchar()!='\n');
	}
	printf("Enter month:");
	while(scanf("%d",&month)!=1 || month<=0 || month>12 ){
		printf("Invalid Month , Enter Again:");
		while(getchar()!='\n');
	}	
	printf("\nDays in month is : %d",get_days_in_month(month,year));
	return 0;
}


