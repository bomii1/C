#include <stdio.h>

int main() {
    int option, num;

    printf("입력 진수 결정 <1>10  <2>16  <3>8 :");
    scanf("%d", &option);
    printf("값 입력: ");

    if (option == 1) {
        scanf("%d", &num);
    } else if (option == 2) {
        scanf("%X", &num);
    } else {
        scanf("%o", &num);
    }

    printf("10진수 ==> %d\n", num);
    printf("16진수 ==> %x\n", num);
    printf("8진수 ==> %o\n", num);


    return 0;
}
