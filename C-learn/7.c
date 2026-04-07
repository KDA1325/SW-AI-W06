#include <stdio.h>

void update(int p) { p = 200;}

void update1(int *p) { *p = 100;}

void update2(int **p) { **p = 1000;}



int main() {

    int x = 10;

    int *p = &x; 



    update(x); printf("%d\n", x);

    update1(&x); printf("%d\n", x); 

    update2(&p); printf("%d\n", x);

    update1(p); printf("%d\n", x); 

}