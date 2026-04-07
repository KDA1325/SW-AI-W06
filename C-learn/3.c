#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};

    // code
    int size = sizeof(arr)/sizeof(int);

    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}