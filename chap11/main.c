#include <stdio.h>

int main() {

    FILE *rfp;
    int hap = 0;
    int in;

    rfp = fopen("C:\\Users\\buij3\\OneDrive\\바탕 화면\\testC.txt", "r");

    for (int i=0; i<5; i++) {
        fscanf(rfp, "%d", &in);
        hap += in;
    }
    printf("합계 ==> %d\n", hap);

    fclose(rfp);

    return 0;
}

