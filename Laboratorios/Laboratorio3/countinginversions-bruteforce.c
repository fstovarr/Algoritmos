#include <stdio.h>
#include <time.h>

int main() {
    freopen("input.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    clock_t t;
    t = clock();
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(A[i] > A[j])
                ans += 1;
        }
    }
    t = clock() - t;

    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("merge_sort took %.9f seconds to execute \n", time_taken);
    printf("%d", ans);

    return 0;
}
