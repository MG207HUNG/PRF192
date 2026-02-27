#include <stdio.h>
void printASCII(){
    for(char c = 'A'; c<='Z';c++){
        printf("%c : %d\n",c,c);
    }
int main(){
	printf("Bang ma ASCII la :");
	printASCII();
}
}