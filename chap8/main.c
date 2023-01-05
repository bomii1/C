#include <stdio.h>
#include <string.h>

int main() {

    int gugudan[8][9];

    for (int i=1; i<=9; i++) {
        for (int k=2; k<=9; k++) {
            gugudan[i][k] = i * k;
            printf("%d x %2d = %2d  ", k, i, gugudan[i][k]);
        }
        printf("%\n");
    }


    return 0;
}
