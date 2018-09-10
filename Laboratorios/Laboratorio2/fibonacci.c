#include<stdio.h>

int fib(int n) {
    int prev = 0, act = 1, res = 0;
    int j;
    for (j = 0; j < n; j++) {
        res = prev + act;
        prev = act;
        act = res;
    }

    return res;
}

int main() {
    FILE *f;
    f = freopen("fibonacci.out", "w", stdout);

    printf("INTEGER: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        a = fib(i);
        if(a < p) {
            printf("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
    
    printf("INTEGER: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        a = fib(i);
        if(a < p) {
            printf("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
    
    printf("INTEGER: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        a = fib(i);
        if(a < p) {
            printf("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }

    fclose(f);

    return(0);
}
