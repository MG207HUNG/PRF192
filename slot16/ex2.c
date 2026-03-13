#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

int countVowel(char *input){
    int count = 0;

    while(*input){
        if(isVowel(*input)) count++;
        input++;
    }

    return count;
}

int main(){

    char *input = NULL;
    int size = 100;

    input = (char*)malloc(size * sizeof(char));
	
    printf("Nhap: ");
    fgets(input,size,stdin);
    printf("So nguyen am la: %d\n", countVowel(input));

    free(input);

    return 0;
}