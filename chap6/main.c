#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    printf("영문자 및 숫자 입력 ==> ");
    scanf("%s", str);

    for (int i=strlen(str)-1; i>=0; i--) {
        printf("%c", str[i]);
    }


    return 0;
}
