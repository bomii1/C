#include <stdio.h>

int main() {

    int a, b, result;
    char oper;

    printf("첫번째 수 입력:");
    scanf("%d", &a);
    printf("연산자 입력: ");
    /*
    정수를 입력하고 나서 enter을 누르면 %c에 문자 대신 \n 이 들어가게 됨
    1. %c 앞에 공백을 넣어주면 \n 무시됨, \n 이 공백으로 인식되어 무시되는 것
    2. rewind(stdin) 함수 사용, 매게 변수로 들어온 스트림을 초기화
    3. fflush(stdin) 함수 사용, 시스템 버퍼 값을 지우는 함수
    */
    scanf(" %c", &oper);
    printf("두번째 수 입력: ");
    scanf("%d", &b);

    switch (oper) {
        case '+': result = a + b;
            break;
        case '-': result = a - b;
            break;
        case '*': result = a * b;
            break;
        case '/': result = a / b;
            break;
        case '%': result = a % b;
            break;
        default:
            printf("다시 입력하세요");
    }
    printf("결과는 %d", result);


    return 0;
}
