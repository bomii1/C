#include <stdio.h>

int main() {

    int sec;
    printf("계산할 초는? ");
    scanf("%d", &sec);

    int hour = sec / 3600;
    int min = (sec % 3600) / 60;
    sec = ((sec % 3600) % 60);
    printf("시간은? %d시간\n", hour);
    printf("분은? %d분\n", min);
    printf("초는? %d초\n", sec);

    return 0;
}
