#include <stdio.h>

char stack[50];
int top=-1;

void push() {
    stack[++top] = '(';
}

void pop() {
    top--;
}

void reset() {
    top=-1;
}

int main(){
    int T;
    char s[50];
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        reset();
        int j=0;
        scanf("%s", s);
        while(s[j]!='\0') {
            if(top<-1)
                break;
            if(s[j]=='(')
                push();
            else if(s[j]==')')
                pop();
            j++;
        }
        if(top==-1)
            printf("YES\n");
        else  
            printf("NO\n");
    }
}