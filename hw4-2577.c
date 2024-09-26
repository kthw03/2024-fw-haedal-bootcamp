#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    int N = A * B * C;
    int answer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int a = 1;
    while (a*10<N) {
        a *= 10;
    }
    while (N>=10){
        answer[N/a] += 1;
        if (N%a == 0)
            answer[0] += 1;
        N = N%a;
        a = a/10;
    }
    for (int i=0;i<9;i++){
        printf("%d\n", answer[i]);
    }
    return 0;
}