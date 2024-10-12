#include <stdio.h>
#include <string.h>
int main() {
    int n=0;
    char s[80];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int flag=0;
        int answer=0;
        scanf("%s", s);
        for(int j=0;j<strlen(s);j++){
            if (s[j]=='O'){
                flag++;
                answer += flag;
            }
            else
                flag=0;
        }
        printf("%d\n", answer);
    }
    return 0;
}