#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int convert = 'a' - 'A';

    printf("문자 입력: ");
    gets(str);
    printf("%변환된 문자: ");
    for (int i=0; i<strlen(str)-1; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + convert); // 소문자 변환
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - convert); // 대문자 변환
        } else {
            printf("%c", str[i]);
        }
    }



    return 0;
}
