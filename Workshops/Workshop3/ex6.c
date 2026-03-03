#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    srand(time(NULL));
    int doan;
    int soLanThu = 7;
    int lanThu = 1;
    int soCanDoan = rand() % 100 + 1;
    printf("========================================\n");
    printf("        ----GAME DOAN SO----\n");
    printf("Ban co %d luot doan.\n", soLanThu);
    printf("========================================\n");
    while (lanThu <= soLanThu) {
        printf("\nLuot thu lan thu %d : ", lanThu);    
        while(scanf("%d", &doan) != 1) {
            printf("Vui long nhap so, nhap lai :");
            while (getchar() != '\n');
        }
        if (doan < 1 || doan > 100) {
            printf("So %d nam ngoai pham vi! nhap lai :\n", doan);
            continue;
        }
        if (doan == soCanDoan) {
            printf("\nCHUC MUNG! Ban da doan dung so %d sau %d luot!\n", soCanDoan, lanThu);
            break;
        } else if (doan > soCanDoan) {
            printf("So can doan be hon so nay.\n");
        } else {
            printf("so can doan lon hon so nay.\n");
        }
        lanThu++;
    }
    if (lanThu > soLanThu) {
        printf("\nRat tiec, ban da het luot. So can doan la: %d\n", soCanDoan);
    }
}
int main() {
    play_game();
    return 0;
}