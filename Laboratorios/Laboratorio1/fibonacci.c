#include<stdio.h>

int fib(int n) {
    int prev = 0, act = 1, res = 0;

    for (int j = 0; j < n; j++) {
        res = prev + act;
        prev = act;
        act = res;
    }

    return res;
}

int main() {
    FILE *f;
    f = freopen("fibonacci.out", "w", stdout);

    int a;
//    scanf("%d", &a);

    for (int i = 0; i <= 50; i++)
        printf("fib(%d) = %d\n", i, fib(i));

    fclose(f);

    return(0);
}
