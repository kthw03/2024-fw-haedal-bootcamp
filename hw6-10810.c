#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, k;
    int* arr;
    scanf("%d %d", &N, &M);
    arr = (int*)malloc(sizeof(int)*N);
    for(int n=0;n<M;n++){
        scanf("%d %d %d", &i, &j, &k);
        for(int m=i-1;m<j;m++){
            arr[m] = k;
        }
    }
    for(int n=0; n<N;n++){
        printf("%d ", arr[n]);
    }
    return 0;
}