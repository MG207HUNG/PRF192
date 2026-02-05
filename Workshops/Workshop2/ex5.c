#include <stdio.h>
int main(){
    int n;
    int tong = 0;
    while(1){
        printf("Nhap n (nhap 0 de ket thuc): ");

        while (scanf("%d", &n) != 1 || n < 0){
            printf("Nhap sai, nhap lai: ");
            while (getchar() != '\n');
        }
        if (n == 0){
            break;
        }
        tong += n;
    }
    printf("Tong la: %d", tong);
    return 0;
}


