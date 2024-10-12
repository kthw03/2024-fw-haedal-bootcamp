#include <stdio.h>
int main() {
    FILE *fp = fopen("mystory.txt", "w"); 
    fputs("#이름: 김태환\n", fp);
    fputs("#주민번호: 030111-3******\n", fp);
    fputs("#주민번호: 010-5437-5132\n", fp);
    fclose(fp);

    FILE *fa = fopen("mystory.txt", "a");
    fputs("#즐겨먹는 음식: 치킨, 햄버거\n", fa);
    fputs("#취미: 영화 보기\n", fa);
    fclose(fa);
    
    FILE *fb = fopen("mystory.txt", "r");
    char buffer[100] ="A";
    while (fgets(buffer, 100, fb) != NULL) {
        fgets(buffer, 100, fb);
        printf("%s", buffer);
    }
    fclose(fb);
}