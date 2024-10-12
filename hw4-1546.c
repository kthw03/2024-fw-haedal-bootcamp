#include <stdio.h>
int main() {
    int N;
    int num[1000];
    int M=0;
    float sum=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &num[i]);
        if (M<num[i])
            M = num[i];
    }
    for(int i=0;i<N;i++){
        sum += (float)num[i]/M*100;
    }
    printf("%f", sum/N);
    return 0;
}