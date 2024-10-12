#include <stdio.h>
int main() {
    int N, n;
    int max=-1000000;
    int min=1000000;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &n);
        if(max<n)
            max = n;
        if(min>n)
            min = n;
    }
    printf("%d %d", min, max);
    return 0;
}