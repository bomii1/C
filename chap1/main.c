#include <stdio.h>

int main() {
    int a,b,result;
    char oper;

    printf("첫번째 값 = ");
    scanf("%d", &a);
    printf("+  -  *  /  ==> ");
    scanf(" %c", &oper);

    printf("두번째 값 = ");
    scanf("%d", &b);
    if (b == 0) {
        printf("0으로 나누면 안됩니다");
        return 0;
    }

    if (oper == '+') { result = a + b; }
    else if (oper == '-') { result = a- b; }
    else if (oper == '*') { result = a * b; }
    else if (oper == '/') { result = a / b; }
    else { printf("잘못된 연산자입니다"); return 0; }

    printf("%d"" %c ""%d = %d", a, oper, b, result);

    return 0;
}
