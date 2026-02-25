#include <stdio.h>
int main() {
    int soNguyenDuong;
    int tong = 0;
    while (1) {
        printf("Nhap so nguyen duong (nhap 0 de ket thuc): ");
        while (scanf("%d", &soNguyenDuong) != 1 || soNguyenDuong < 0) {
            printf("Nhap sai, nhap lai: ");
            while (getchar() != '\n');
        }
        if (soNguyenDuong == 0) {
            break;
        }
        tong += soNguyenDuong;
    }
    printf("Tong la: %d", tong);
    return 0;
}