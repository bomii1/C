#include <stdio.h>
#include <string.h>

int main() {

    char str[50];
    char ch1, ch2;

    printf("글자 입력: ");
    gets(str);
    printf("기존의 문자와 새로운 문자: ");
    scanf("%c %c", &ch1, &ch2);
    printf("변환된 결과: ");

    for (int i=0; i<strlen(str); i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
            printf("%c", str[i]);
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}
