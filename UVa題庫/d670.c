#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[35];
    while(scanf("%s" , input) != EOF){
        unsigned long int length = strlen(input) , i;
        char value[] = {"22233344455566677778889999"};
        for(i = 0 ; i < length ; ++i){
            if(isalpha(input[i])){
                printf("%c",value[input[i] - 'A']);
            }else
                printf("%c",input[i]);
        }
        puts("");
    }
    return 0;
}

