#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char encode[] = {"QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./`1234567890-="};
    while(gets(input) != NULL){
        char *ptr;
        int i;
        for(i = 0 ; i < strlen(input) ; ++i){
            if(input[i] != ' '){
                ptr = strchr(encode , input[i]);
                printf("%c",*(ptr - 1));
            }else
                printf(" ");
        }
        puts("");
    }
    return 0;
}
