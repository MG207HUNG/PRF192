#include <stdio.h>

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

    char input[100];

    printf("Nhap: ");
    fgets(input,100,stdin);

    printf("So nguyen am la: %d\n", countVowel(input));

    return 0;
}