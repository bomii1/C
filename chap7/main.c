#include <stdio.h>

int main() {

    int start, end, num;

    printf("합계의 시작값: ");
    scanf("%d", &start);
    printf("합계의 끝값: ");
    scanf("%d", &end);
    printf("배수: ");
    scanf("%d", &num);

    int hap = 0;
    for (int i=start; i<=end; i++) {
        if (i % num == 0) {
            hap += i;
        }
    }
    printf("합계 = %d", hap);

    return 0;
}
