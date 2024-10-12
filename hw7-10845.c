#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
int queue[MAX];
int front = -1, rear = -1;

void push(int value) {
    queue[rear++] = value;
}

int empty() {
    if (front == rear) {
        printf("1\n");
        return 1;
    } else {
        printf("0\n");
        return 0;
    }
}

void pop() {
    if (empty()==1)
        printf("-1\n");
    else {
        printf("%d\n", queue[front++]);
    }
}

void size(){
    printf("%d\n", rear-front);
}

void front1() {
    printf("%d\n", queue[front]);
}

void back() {
    printf("%d\n", queue[rear-1]);
}

int main() {
    int N, n;
    char s[10];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%s", s);
        if(strcmp(s, "push")==0){
            scanf("%d", &n);
            push(n);
        }
        else if(strcmp(s, "pop")==0)
            pop();
        else if(strcmp(s, "size")==0)
            size();
        else if(strcmp(s, "empty")==0)
            empty();
        else if(strcmp(s, "front")==0)
            front1();
        else if(strcmp(s, "back")==0)
            back();
    }
    return 0;
}