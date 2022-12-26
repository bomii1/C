#include <stdio.h>

int main() {
    int a,b,c,d,result;

    printf("첫 번째 값: ");
    scanf("%d", &a);
    printf("두 번째 값: ");
    scanf("%d", &b);
    printf("세 번째 값: ");
    scanf("%d", &c);
    printf("네 번째 값: ");
    scanf("%d", &d);

    result = a + b + c +d;
    printf("a + b + c + d = %d",result);

    return 0;
}
