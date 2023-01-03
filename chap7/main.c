#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int big = 0;
    int small = 0;
    int num = 0;
    int ch = 0;

    printf("문자열을 입력 (100자 이내): ");
    scanf("%s", str);

    for (int i=0; i<strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            big++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            small++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            num++;
        } else {
            ch++;
        }
    }

    printf("대문자 %d 개, 소문자 %d 개, 숫자 %d 개, 특수문자 %d 개", big, small, num, ch);

    return 0;
}
