#include<stdio.h>
#include <math.h>
#define MAX 100
void inputArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]); 
    }
}
void outputArr(int a[], int n) {
    printf("Mang hien tai la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
    }
    return 1;
}
}
int countPrimes(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i]) == 1) { 
            count++;
        }
    }
    return count;
}
int main(){
	int a[MAX];
    int n;
    do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    inputArr(a, n);
    outputArr(a, n);
    printf("-> So luong so nguyen to xuat hien trong mang la: %d\n", countPrimes(a, n));
    return 0;
}