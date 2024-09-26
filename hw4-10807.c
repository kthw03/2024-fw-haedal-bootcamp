#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int Num[100];
    scanf("%d", &Num);
    int v;
    scanf("%d", &v);
    int answer;
    for (int i=0; i<N; i++) {
        if (Num[i] == v)
            answer += 1;
    }
    printf("%d", v);
    return 0;
}