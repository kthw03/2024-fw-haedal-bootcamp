#include <stdio.h>
int main() {
    int N;
    int num[10];
    int answer=0;
    for(int i=0;i<10;i++){
        scanf("%d", &N);
        num[i] = N%42;
    }
    for(int i=0;i<10;i++){
        int flag=0;
        for(int j=i+1;j<10;j++){
            if (num[i]==num[j])
                flag=1;
        }
        if (flag==0)
            answer += 1;
    }
    printf("%d", answer);
    return 0;
}