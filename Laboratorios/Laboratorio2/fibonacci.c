#include<stdio.h>

void sshort() {
    printf("SHORT: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        short prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;

        if(a < p) {
            printf("Overflow to SHORT in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void iinteger() {
    printf("INTEGER: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        int prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;
        if(a < p) {
            printf("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void llong() {
printf("LONG: ");
    long i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        long prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }

        a = res;
        if(a < p) {
            printf("Overflow to LONG in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void longlong() {
    printf("LONG LONG: ");
    long long i, p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        long long prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;

        if(a < p) {
            printf("Overflow to LONG LONG in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void ffloat() {

printf("FLOAT: ");
    int i;
    float p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        float prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;

        if(a < p) {
            printf("Overflow to FLOAT in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void ddouble() {
printf("DOUBLE: ");
    int i;
    double p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        double prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;
        if(a < p) {
            printf("Overflow to DOUBLE in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void ldouble() {
    printf("LONG DOUBLE: ");
    int i;
    long double p = 0, a = 0;
    for (i = 0; i <= 50; i++){
        long double prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;
            printf("Overflow to LONG DOUBLE in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

int main() {
    FILE *f;
    f = freopen("fibonacci.out", "w", stdout);

    sshort();
    iinteger();
    llong();
    longlong();
    ffloat();
    ddouble();
    ldouble();

    fclose(f);

    return(0);
}
