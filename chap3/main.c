#include <stdio.h>

int main() {

    int num;

    printf("정수를 입력하세요 ==> ");
    scanf("%d",&num);

    printf("10진수 ==> %d\n", num);
    printf("16진수 ==> %x\n", num);
    printf("8진수 ==> %o\n", num);


    return 0;
}
