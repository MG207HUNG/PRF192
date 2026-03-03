#include <stdio.h>
void show_menu(){
		printf("=====================================\n");
		printf("------MAY TINH BO TUI------\n");
		printf("Menu : \n");
		printf("Phep cong : +\n");
		printf("Phep tru  : -\n");
		printf("Phep nhan : *\n");
		printf("Phep chia : /\n");
		printf("Bam 0 de thoat\n");
		printf("=====================================\n");
}
char processor(){
    char choice;
    float x, y, ketQua;
    printf("Lua chon :");
    while(scanf(" %c",&choice)!=1 || (choice!='+' && choice!='-' &&  choice!='*' && choice!='/' &&   choice!='0') ){
        printf("Vui long nhap ki tu hop le ( + ; - ; * ; / ; 0 ):");
        while(getchar()!='\n');
    }
    switch(choice){
        case '0':
            printf("Thoat chuong trinh\n");
            break;   
        case '+':
        case '-':
        case '*':
        case '/':
            printf("Nhap x :");
            while(scanf("%f",&x)!=1){
                printf("Nhap sai , nhap lai x : ");
                while(getchar()!='\n');
            }
            printf("Nhap y :");
            while(scanf("%f",&y)!=1){
                printf("Nhap sai , nhap lai y: ");
                while(getchar()!='\n');
            }
            if(choice=='/' && y==0){
                printf("Error : khong the chia cho 0\n");
                break;
            }
            switch(choice){
                case '+': 
				ketQua = x + y;
				break;
                case '-': 
				ketQua = x - y; 
				break;
                case '*': 
				ketQua = x * y; 
				break;
                case '/': 
				ketQua = x / y; 
				break;
            }
            printf("Ket qua : %.2f %c %.2f = %.2f\n",x, choice, y, ketQua);
            break;
    }
    return choice;
}
int main(){
	char choice ;
    do{
        show_menu();
        choice = processor();
    }while(choice != '0');
    return 0;
}