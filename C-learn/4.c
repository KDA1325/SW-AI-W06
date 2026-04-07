#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {

        // 0, 1, 4, 9, 16
        arr[i] = i * i;

    }

    printf("%d\n", arr[3]); // 결과 기입

     

    // start of code
    free(arr);
    // end of code

    return 0;

}