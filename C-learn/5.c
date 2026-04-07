// 다음 코드를 실행했을 때 printf 출력 값이 2 3 4 5 6 이 되도록 func 함수를 완성하시오.

#include <stdio.h>

void func(int *arr, int size) {
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 1;
    }
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    func(arr, 5);

    for (int i = 0; i < 5; i++) {

        printf("%d ", arr[i]);

    }

    return 0;

}

