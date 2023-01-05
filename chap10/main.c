#include <stdio.h>
#include <string.h>

void conversion(char ch) {
    int diff = 'a' - 'A';

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c", ch + diff);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c", ch - diff);
    } else {
        printf("%c", ch);
    }
}

int main() {

    char x, y;

    printf("두 문자를 입력: ");
    scanf("%c %c", &x, &y);
    int diff = x - y;
    printf("두 문자의 차이 ==> %d", diff);

    return 0;
}
