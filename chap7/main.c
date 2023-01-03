#include <stdio.h>
#include <string.h>

int main() {

    char star[10];

    printf("숫자 입력: ");
    scanf("%s", star);

    //아스키코드 문자0~9 => 48~57
    for (int i=0; i<strlen(star); i++) {
        for (int j=0; j<star[i]-48; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
