#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int num;
    char c;
    scanf("%d%c",&num , &c);
    while(num-- != 0){
        char input[210];
        gets(input);
        unsigned long int length = strlen(input);
        int i , frequency[26] = {0} , max = 0;
        for(i = 0 ; i < length ; ++i){
            if(isalpha(input[i])){
                frequency[tolower(input[i]) - 97]++;
                if(frequency[tolower(input[i]) - 97] > max)
                    max = frequency[tolower(input[i]) - 97];
            }
        }
        for(i = 0 ; i < 26 ; ++i){
            if(frequency[i] == max)
                printf("%c",(i + 97));
        }
        puts("");
        
    }
    return 0;
}

