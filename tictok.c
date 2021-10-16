#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void display(int* data);
int winner = 0, count = 0,data[9];
int index, sign, player, flag, i, k, j;
int main() {
        for (i = 0; i < 9; i++)
                data[i] = ' ';
        while (count < 9) {
                flag = 0;
                display(data);
                if (count % 2 == 0) {
                        sign = 'X';
                        player = 1;
                } else {
                        sign = 'Y';
                        player = 2;
                }
                printf("Move for player%d(1-9):", player);
                scanf("%d", &index);
                if (index < 1 || index > 9) {
                        printf("Allowed index is 1 to 9!!\n");
                        continue;
                }
                if (data[index - 1] == 'X' || data[index - 1] == 'Y') {
                        printf("Position Already occupied!!\n");
                        Sleep(1);
                        continue;
                }
                data[index - 1] = sign;
                count++;

                for (i = 0; i < 9; i++) {
                        if (i % 3 == 0)
                                flag = 0;

                        if (data[i] == sign)
                                flag++;

                        if (flag == 3) {
                                winner = 1;
                                goto win;
                        }
                }

                flag = 0;
                for (i = 0; i < 3; i++) {
                        for (k = i; k <= i + 6; k = k + 3) {
                                if (data[k] == sign)
                                        flag++;
                        }
                        if (flag == 3) {
                                winner = 1;
                                goto win;
                        }
                        flag = 0;
                }
                if ((data[0] == sign && data[4] == sign && data[8] == sign) ||
                        (data[2] == sign && data[4] == sign && data[6] ==  sign)) {
                        winner = 1;
                        goto win;
                }
        }
  win:
        display(data);
        if (winner) {
                printf("Player %d is the winner. Congrats!!\n", player);
        } else {
                printf("Match draw.. Best of luck for both\n");
        }
        return 0;
  }
void display(int* data){
	system("cls");
        printf("\n\n");
        printf("\t\t\t  %c | %c  | %c  \n", data[0], data[1], data[2]);
        printf("\t\t\t----+----+----\n");
        printf("\t\t\t  %c | %c  | %c  \n", data[3], data[4], data[5]);
        printf("\t\t\t----+----+---\n");
        printf("\t\t\t  %c | %c  | %c  \n\n", data[6], data[7], data[8]);
}