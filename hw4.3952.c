#include <stdio.h>
int main() {
    int N[10];
    int num[10];
    int answer=0;
    for(int i=0;i<10;i++){
        scanf("%d", &N[i]);
        num[i] = N[i]%42;
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if (num[i]==num[j])
                answer+=1;
        }
    }
    printf("%d", 10-answer);
    return 0;
}