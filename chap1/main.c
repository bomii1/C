#include <stdio.h>
#include <string.h>

int main() {
    int a,b,result,option;

    printf("첫번째 값 = ");
    scanf("%d", &a);
    printf("<1> 덧셈  <2> 뺄셈  <3> 곱셈  <4> 나눗셈  ==> ");
    scanf("%d", &option);
    printf("두번째 값 = ");
    scanf("%d", &b);

    if (option == 1) { result = a + b; printf("a + b = %d",result); }
    else if (option == 2) { result = a - b; printf("a - b = %d",result); }
    else if (option == 3) { result = a * b; printf("a * b = %d",result); }
    else if (option == 4) { result = a % b; printf("a / b = %d",result);; }
    else { printf("잘못된 번호입니다"); }

    return 0;
}
