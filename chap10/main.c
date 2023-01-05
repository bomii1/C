#include <stdio.h>
#include <string.h>

int diff(char x, char y) {
    if (x >= y) {
        return x - y;
    } return y - x;
}

int main() {

    char x, y;

    printf("두 문자를 입력: ");
    scanf("%c %c", &x, &y);

    printf("두 문자의 차이 ==> %d", diff(x, y));

    return 0;
}
