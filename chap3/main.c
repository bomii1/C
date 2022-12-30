#include <stdio.h>

int main() {

    int money;

    printf("## 교환할 돈은? ");
    scanf("%d", &money);

    printf("오백원짜리 ==> %d\n", money / 500);
    int charge = money % 500;
    printf("백원짜리 ==> %d\n", charge / 100);
    charge %= 100;
    printf("오십원짜리 ==> %d\n", charge / 50);
    charge %= 50;
    printf("십원짜리 ==> %d\n", charge / 10);
    charge %= 10;
    printf("바꾸지 못한 잔돈 ==> %d", charge);


    return 0;
}
