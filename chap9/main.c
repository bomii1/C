#include <stdio.h>
#include <string.h>

int main() {

    int a,b;
    int *p1,*p2;

    printf("a 값 입력: ");
    scanf("%d", &a);
    printf("b 값 입력: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf("바뀐 값 a 는 %d, b 는 %d", *p1, *p2);

    return 0;
}
