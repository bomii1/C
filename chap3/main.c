#include <stdio.h>

int main() {

    int a = 0x41, b = 0x61;
    printf("%c",a);
    printf("%c",b);
    int tol = b - a;

    printf("%c를 소문자로 표시하면 %c이며\n", 'K','K'+tol);
    printf("%c를 대문자로 표시하면 %c이며\n", 'z', 'z'-tol);



    return 0;
}
