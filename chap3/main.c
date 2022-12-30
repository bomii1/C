#include <stdio.h>

int main() {

    float firstNum, secondNum;

    printf("첫 번째 계산할 값 ==> ");
    scanf("%f", &firstNum);
    printf("두 번째 계산할 값 ==> ");
    scanf("%f", &secondNum);

    printf("%5.2f + %5.2f = %5.2f\n", firstNum, secondNum, firstNum + secondNum);
    printf("%5.2f - %5.2f = %5.2f\n", firstNum, secondNum, firstNum - secondNum);
    printf("%5.2f * %5.2f = %5.2f\n", firstNum, secondNum, firstNum * secondNum);
    printf("%5.2f / %5.2f = %5.2f\n", firstNum, secondNum, firstNum / secondNum);
    printf("%d %% %d = %d\n", (int)firstNum, (int)secondNum, (int)firstNum % (int)secondNum);


    return 0;
}
