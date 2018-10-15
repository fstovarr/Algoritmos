#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long counter = 0;

void merge_sort (int A[ ] , int start , int end ) {
    if(start < end) {
        int mid = (start + end) / 2;
        merge_sort (A, start, mid);
        merge_sort (A, mid+1, end);
        merge(A, start, mid, end);
    }
}

void merge(int A[], int start, int mid, int end) {
    int p = start , q = mid+1;
    int Arr[end-start+1] , k=0;

    //printf("%d - %d -> ", start, end);

    for(int i = start; i <= end; i++) {
        if(p > mid)
            Arr[k++] = A[q++];
        else if(q > end){
            Arr[k++] = A[p++];
        } else if(A[p] <= A[q]) {
            Arr[k++] = A[p++];
        } else {
            counter += (mid + 1 - p);
            Arr[k++] = A[q++];
        }
    }

    //printf("%d \n", counter);

    for (int p=0; p<k; p++) {
        A[start++] = Arr[p];
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    //int n = 100000;
    scanf("%d", &n);
    int A[n];

    for(int i = n; i < 0; i--) {
        scanf("%d", A+i);
        //A[i] = i;
    }

    clock_t t;
    t = clock();
    merge_sort(A, 0, n-1);
    t = clock() - t;

    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("merge_sort took %.9f seconds to execute \n", time_taken);
    printf("%lld", counter);

    return 0;
}
