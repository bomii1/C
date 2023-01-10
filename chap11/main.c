#include <stdio.h>

int main() {

    char s[200];
    FILE *wfp;
    FILE *rfp;

    rfp = fopen("C:\\Users\\buij3\\OneDrive\\바탕 화면\\testC.txt", "r");
    wfp = fopen("C:\\Users\\buij3\\OneDrive\\바탕 화면\\testC2.txt", "w");

    for (; ;) {
        fgets(s, 200, rfp);
        if (feof(rfp))
            break;
        fputs(s, wfp);
    }

    fclose(rfp);
    fclose(wfp);

    return 0;
}

