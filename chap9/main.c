#include <stdio.h>
#include <string.h>

int main() {

    int arr[10];
    int *p;
    p = arr;

    int size = sizeof(arr)/sizeof(int);
    for (int i=0; i<size; i++) {
        printf("arr[%d] 데이터: ", i);
        scanf("%d", p+i);
    }

    printf("정렬 전 배열 => ");
    for (int i=0; i<size; i++) {
        printf("%2d", *(p+i));
    }
    printf("\n");

    printf("정렬 후 배열 => ");

    for (int i=0; i<size; i++) {
          for (int k=i+1; k<size; k++) {
              if (*(p+i) > *(p+k)) {
                  int tmp = *(p+i);
                  *(p+i) = *(p+k);
                  *(p+k) = tmp;
              }
          }
    }

    for (int i=0; i<size; i++) {
        printf("%2d", *(p+i));
    }

    return 0;
}
