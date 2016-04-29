#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1005];
    while(gets(input) != NULL){
        int i , check = 0;
        int count[123] = {0};
        for(i = 0 ; i < strlen(input) ; ++i){
            if(isalpha(input[i]))
                count[tolower(input[i])]++;
            else if(isalnum(input[i]))
                count[input[i]]++;
        }
        for(i = 0 ; i < 123 ; ++i){
            if(count[i] % 2 != 0)
                check++;
            if(check > 1)
                break;
        }
        if(check > 1)
            puts("no...");
        else
            puts("yes !");
    }
    return 0;
}
