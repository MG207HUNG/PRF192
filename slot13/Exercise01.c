#include <stdio.h>
#define MAX 100
int menu();
void addValue(int *a, int *n);
int searchValue(int *a, int n, int x);
void removeFirst(int *a, int *n, int x);
void removeAll(int *a, int *n, int x);
void printArray(int *a, int n);
void sortAscending(int *a, int n);
void sortDescending(int *a, int n);
int main() {
    int a[MAX];
    int n = 0;
    int choice, x;
    do {
        choice = menu();
        switch(choice){
        case 1:
            addValue(a, &n);
            break;
        case 2:
            printf("Enter value to search: ");
            scanf("%d",&x);
            int pos = searchValue(a, n, x);
            if(pos == -1)
                printf("Value not found\n");
            else
                printf("Found at index %d\n", pos);
            break;
        case 3:
            printf("Enter value to remove: ");
            scanf("%d",&x);
            removeFirst(a, &n, x);
            break;
        case 4:
            printf("Enter value to remove all: ");
            scanf("%d",&x);
            removeAll(a, &n, x);
            break;
        case 5:
            printArray(a, n);
            break;
        case 6:
            sortAscending(a, n);
            printf("Sorted ascending\n");
            break;
        case 7:
            sortDescending(a, n);
            printf("Sorted descending\n");
            break;
        default:
            printf("Exit program\n");

        }
    }while(choice >=1 && choice <=7);
    return 0;
}
int menu(){
    int choice;
    printf("\n====== MENU ======\n");
    printf("1. Add value\n");
    printf("2. Search value\n");
    printf("3. Remove first\n");
    printf("4. Remove all\n");
    printf("5. Display array\n");
    printf("6. Sort ascending\n");
    printf("7. Sort descending\n");
    printf("Others. Exit\n");
    printf("Choose: ");
    scanf("%d",&choice);
    return choice;
}
void addValue(int *a, int *n){
    if(*n >= MAX){
        printf("Array is full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", a + *n);
    (*n)++;
}
int searchValue(int *a, int n, int x){
    for(int i=0;i<n;i++){
        if(*(a+i) == x)
            return i;
    }
    return -1;
}
void removeFirst(int *a, int *n, int x){
    int pos = searchValue(a, *n, x);
    if(pos == -1){
        printf("Value not found\n");
        return;
    }
    for(int i=pos;i<*n-1;i++){
        *(a+i) = *(a+i+1);
    }
    (*n)--;
}
void removeAll(int *a, int *n, int x){
    int i=0;
    while(i < *n){

        if(*(a+i) == x){
            for(int j=i;j<*n-1;j++)
                *(a+j) = *(a+j+1);
            (*n)--;
        }else{
            i++;
        }
    }
}
void printArray(int *a, int n){
    if(n==0){
        printf("Array empty\n");
        return;
    }
    printf("Array: ");

    for(int i=0;i<n;i++)
        printf("%d ", *(a+i));
    printf("\n");
}
void sortAscending(int *a, int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(*(a+j) > *(a+j+1)){

                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;

            }
}
void sortDescending(int *a, int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(*(a+j) < *(a+j+1)){

                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
}