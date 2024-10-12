#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    int N = A * B * C;
    int answer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i=N;i>0;i/=10){
        answer[i%10]++;
    }

    for (int i=0;i<10;i++){
        printf("%d\n", answer[i]);
    }
    return 0;
}