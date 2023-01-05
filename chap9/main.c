#include <stdio.h>
#include <string.h>

int main() {

    char stack[5];
    int top = 0;
    int select;
    char car = 'A';

    do {
        printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝내기 ==> ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                if (top >= 5) {
                    printf("더 이상 차가 들어갈 수 없습니다\n");
                } else {
                    top++;
                    printf("%c 차가 %d 층에 들어왔습니다\n", car, top);
                    car++;
                }
                break;
            case 2:
                if (top <= 0) {
                    printf("더 이상 빼낼 차가 없습니다\n");
                } else {
                    car--;
                    printf("%d 층에 있던 %c 차가 나갔습니다\n", top, car);
                    top--;
                }
                break;
            case 3:
                break;
            default:
                printf("잘못된 입력입니다\n");
        }

    } while (select != 3);


    return 0;
}
