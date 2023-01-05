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

    char str[50];
    printf("문자열 입력: ");
    gets(str);

    for (int i=0; i<strlen(str); i++) {
        conversion(str[i]);
    }

    return 0;
}
