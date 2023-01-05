#include <stdio.h>
#include <string.h>

int main() {

    int arr[10] = {1,0,3,2,5,4,7,6,9,8};
    int *p;
    p = arr;

    printf("정렬 전 배열 => ");
    for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%2d", *(p+i));
    }
    printf("\n");

    printf("정렬 후 배열 => ");

    for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
          for (int k=i+1; k<sizeof(arr)/sizeof(int); k++) {
              if (*(p+i) < *(p+k)) {
                  int tmp = *(p+i);
                  *(p+i) = *(p+k);
                  *(p+k) = tmp;
              }
          }
    }

    for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%2d", *(p+i));
    }

    return 0;
}
