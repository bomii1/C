#include <stdio.h>
#include <malloc.h>

int main() {

    int *p;
    int hap = 0;
    int cnt;

    printf("입력할 개수는? ");
    scanf("%d", &cnt);

    p = (int *) malloc(sizeof(int) * cnt);

    for (int i=0; i<cnt; i++) {
        printf("%d번째 숫자: ", i+1);
        scanf("%d", (p+i));
    }
    for (int i=0; i<cnt; i++) {
        hap = hap + *(p+i);
    }
    printf("입력한 숫자의 합: %d", hap);

    free(p);

    return 0;
}

