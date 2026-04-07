#include <stdio.h>

int main(){
    // int a;
    // a = 2;

    // // %p = 16진수 형태로 출력 
    // printf("%p\n", &a);

    int *p; // int 변수 p의 주소 
    int a; // int 변수 a
   // &a = int 변수 a의 주소

    p = &a; // p에게 a 주소값 저장 

    printf("포인터 p에 들어 있는 값: %p\n", p);
    printf("int 변수 a가 저장된 주소: %p\n", &a);
    return 0;
}