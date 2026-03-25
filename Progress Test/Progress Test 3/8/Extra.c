#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// ===================== NUMBER =====================

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int isSymmetric(int n){
    int temp = n, rev = 0;
    while(temp){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int reverseNumber(int n){
    int rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int sumDigits(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isPerfect(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0) sum += i;
    }
    return sum == n;
}

// ===================== ARRAY =====================

void inputArray(int a[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int findMax(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

int findMin(int a[], int n){
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min) min = a[i];
    }
    return min;
}

int maxEven(int a[], int n){
    int max = -1;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            if(max == -1 || a[i] > max){
                max = a[i];
            }
        }
    }
    return max;
}

int search(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x) return i;
    }
    return -1;
}

int sumArray(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];
    return sum;
}

// ===================== SORT =====================

void sortAsc(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
    }
}

void sortDesc(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
    }
}

// ===================== STRING BASIC =====================

void inputString(char s[]){
    fgets(s, 1000, stdin);
    s[strcspn(s, "\n")] = 0;
}

void removeExtraSpaces(char s[]){
    int i = 0, j = 0;
    while(s[i] == ' ') i++;
    for(; s[i]; i++){
        if(s[i] == ' ' && s[i+1] == ' ') continue;
        s[j++] = s[i];
    }
    if(j > 0 && s[j-1] == ' ') j--;
    s[j] = '\0';
}

void toLowerCase(char s[]){
    for(int i = 0; s[i]; i++) s[i] = tolower(s[i]);
}

void toUpperCase(char s[]){
    for(int i = 0; s[i]; i++) s[i] = toupper(s[i]);
}

// ===================== STRING SPECIAL =====================

// normalize name
void normalizeName(char s[]){
    removeExtraSpaces(s);
    toLowerCase(s);
    if(strlen(s) == 0) return;

    s[0] = toupper(s[0]);
    for(int i = 1; s[i]; i++){
        if(s[i-1] == ' ') s[i] = toupper(s[i]);
    }
}

// count types
void countCharTypes(char s[]){
    int d=0,l=0,o=0;
    for(int i=0;s[i];i++){
        if(isdigit(s[i])) d++;
        else if(isalpha(s[i])) l++;
        else o++;
    }
    printf("Digits:%d Letters:%d Others:%d\n",d,l,o);
}

// palindrome string
int isPalindrome(char s[]){
    int l=0,r=strlen(s)-1;
    while(l<r){
        if(s[l]!=s[r]) return 0;
        l++;r--;
    }
    return 1;
}

// reverse string
void reverseString(char s[]){
    int n=strlen(s);
    for(int i=0;i<n/2;i++){
        char t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
}

// ===================== WORD PROCESS =====================

// uppercase 2 first char each word
void upperFirstTwo(char s[]){
    for(int i = 0; s[i]; i++){
        if(i==0 || s[i-1]==' '){
            if(isalpha(s[i])) s[i]=toupper(s[i]);
            if(s[i+1] && isalpha(s[i+1])) s[i+1]=toupper(s[i+1]);
        }
    }
}

// count words
int countWords(char s[]){
    int count = 0;
    for(int i = 0; s[i]; i++){
        if((i==0 && s[i]!=' ') || (s[i]!=' ' && s[i-1]==' ')){
            count++;
        }
    }
    return count;
}

// ===================== STRUCT =====================

typedef struct{
    int id;
    char name[100];
    float price;
}Book;

void inputBooks(Book b[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&b[i].id); getchar();
        fgets(b[i].name,100,stdin);
        b[i].name[strcspn(b[i].name,"\n")] = 0;
        scanf("%f",&b[i].price); getchar();
    }
}

void printBooks(Book b[], int n){
    for(int i=0;i<n;i++){
        printf("%d | %s | %.2f\n",b[i].id,b[i].name,b[i].price);
    }
}

int findMaxPrice(Book b[], int n){
    int idx=0;
    for(int i=1;i<n;i++){
        if(b[i].price > b[idx].price) idx=i;
    }
    return idx;
}

int searchById(Book b[], int n, int id){
    for(int i=0;i<n;i++){
        if(b[i].id == id) return i;
    }
    return -1;
}

void sortPriceAsc(Book b[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i].price > b[j].price){
                Book t=b[i]; b[i]=b[j]; b[j]=t;
            }
        }
    }
}