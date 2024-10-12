#include <stdio.h>
#include <stdlib.h>

int* arr;
void made(int N) {
    arr = (int*)malloc(sizeof(int)*N);
}
int front = 0;
int rear = -1;

int main(void) {
    int N;
    scanf("%d", &N);
    made(N);
    for(int i=1;i<N+1;i++){
        arr[++rear] = i;
    }
    while(front!=rear){
        front++;
        if(front==rear){
            break;
        }
        rear++;
        arr[rear%N] = arr[front%N];
        front++;
    }
    printf("%d", arr[front%N]);
    return 0;
}