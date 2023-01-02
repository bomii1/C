#include <stdio.h>
#include <string.h>

int main() {

    int result = 0;

    for (int i=1; i<=1000; i++) {
        if (i % 3 == 0 || i % 7 == 0) {
            result += i;
        }
    }
    printf("%d", result);

    return 0;
}
