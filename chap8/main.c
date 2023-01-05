#include <stdio.h>
#include <string.h>

int main() {

    int aa[3][4];
    int val = 1;

    int i = 0;
    while (i < 3) {
        int k = 0;
        while (k < 4) {
            aa[i][k] = val;
            val++;
            printf("aa[%d][%d] ==> %d\t", i, k, aa[i][k]);
            k++;
        }
        i++;
        printf("\n");
    }



    return 0;
}
