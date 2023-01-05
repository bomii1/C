#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char strCopy[100];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("내용을 거꾸로 출력: ");
    for (int i=0; i<strlen(str); i++) {
        strCopy[i] = str[strlen(str)-i-1];
    }
    strCopy[strlen(str)+1] = '\0';
    printf("%s",strCopy);


    return 0;
}
