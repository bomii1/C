#include <stdio.h>
#include <string.h>

int main() {

    char s[200];
    FILE *rfp;

    rfp = fopen("C:\\Users\\buij3\\OneDrive\\바탕 화면\\testC.txt", "r");

    for( ; ; ) {
        fgets(s, 200, rfp);

        if (feof(rfp)) {
            break;
        }
        printf("%s", s);
    }
    fclose(rfp);

    fclose(rfp);

    return 0;
}
