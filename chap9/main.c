#include <stdio.h>
#include <string.h>

int main() {

    char str[50];
    char *p;

    printf("글자를 입력: ");
    gets(str);
    p = str;

    for (int i=strlen(str)-1; i>=0; i--) {
        printf("%c", *(p+i));
    }


    return 0;
}
