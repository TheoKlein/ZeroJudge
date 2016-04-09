#include <stdio.h>
#include <string.h>

int main() {
    char input[100000];
    gets(input);
    unsigned long int length = strlen(input);
    int n , i;
    for(n = 0 ; n < length ; ++n){
        if(n == 0){
            puts(input);
        }else{
            printf("%s",&input[n]);
            for(i = 0 ; i < n ; ++i){
                printf("%c",input[i]);
            }
            puts("");
        }
    }
    
    return 0;
}
