#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseString(char *str){
	char *start = str;
	char *end = str + strlen(str)- 1;
	char temp;
	
	while(start < end ){
		temp = *start;
		*start = *end ;
		*end = temp ;
		start ++ ;
		end -- ;
	}
int main(){
	
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str,100,stdin);
	
	str[strcspn(str,"\n")] = '\0';
	
	reverseString(str);
	
	printf("Chuoi sau khi dao: %s \n",str);
	
	return 0 ;
}