#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point;

void nhapDiem(Point p[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d %d", &p[i].x, &p[i].y);
	}
}

void inDiem(Point p[], int n){
	for(int i = 0; i < n; i++){
		printf("%d %d\n", p[i].x, p[i].y);
	}
}

void diemLonHon(Point p[], int n){
	printf("Cac diem co y > x:\n");
	for(int i = 0; i < n; i++){
		if(p[i].y > p[i].x){
			printf("%d %d\n", p[i].x, p[i].y);
		}
	}
}
int main() {
	system("cls");

	printf("\nINPUT:\n");

	int n;
	scanf("%d", &n);

	Point p[n];

	nhapDiem(p, n);

	printf("\nOUTPUT:\n");

	inDiem(p, n);
	diemLonHon(p, n);

	printf("\n");
	system("pause");
	return 0;
}