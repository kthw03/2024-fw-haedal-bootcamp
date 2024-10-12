#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000 
int stack[MAX];
int top = -1;

void push(int item) {
    if (top >= MAX - 1) {
        printf("스택 오버플로우\n");
		    }
    else stack[++top] = item;
    }

void pop() {
    if (top == -1) {
        printf("-1\n");
    } else printf("%d\n", stack[top--]);
}

void size(){
    if(top==-1)
        printf("0\n");
    else
        printf("%d\n", top+1);
}

void peek() {
    if (top == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", stack[top]);
    }
}

int main() {
    int N, n;
    char s[10];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%s", s);
        if(strcmp(s, "push") == 0){
            scanf("%d", &n);
            push(n);
        }
        else if(strcmp(s, "pop") == 0){
            pop();
        }
        else if(strcmp(s, "size") == 0){
            size();
        }
        else if(strcmp(s, "empty") == 0){
            if(top==-1)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(strcmp(s, "top") == 0){
            peek();
        }
    }
    return 0;
}

