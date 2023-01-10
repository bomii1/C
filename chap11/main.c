#include <stdio.h>

int main() {

    char s[20];
    FILE *wfp;

    wfp = fopen("C:\\Users\\buij3\\OneDrive\\바탕 화면\\testC.txt", "w");

    printf("문자열 입력: ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);

    return 0;
}

