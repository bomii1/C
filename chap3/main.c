#include <stdio.h>

int main() {

    char str[10];

    printf("문자열을 입력 ==>");
    scanf("%s", str);
    printf("%s\n", str);

    for (int i=sizeof(str)-1; i>=0; i--) {
        if (str[i] == NULL) { continue;}
        printf("%c",str[i]);
    }


    return 0;
}
