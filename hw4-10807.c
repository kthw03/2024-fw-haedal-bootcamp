#include <stdio.h>
int main() {
    int N;
    int Num[100];
    int v;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &Num[i]);
    }
    scanf("%d", &v);
    int answer=0;
    for (int i=0; i<N; i++) {
        if (Num[i] == v)
            answer += 1;
    }
    printf("%d", answer);
    return 0;
}