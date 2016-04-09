#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n , i , j , max = 0;
    char c;
    int frequency[26] = { 0 };
    scanf("%d%c",&n,&c);
    while(n-- != 0){
        char input[100];
        gets(input);
        for(i = 0 ; i < strlen(input) ; ++i){
            if(isalpha(input[i])){
                frequency[(toupper(input[i])) - 65]++;
                if(frequency[(toupper(input[i])) - 65] > max)
                    max = frequency[(toupper(input[i])) - 65];
            }
        }
    }
    for(i = max ; i > 0 ; --i){
        for(j = 0 ; j < 26 ; ++j){
            if(frequency[j] == i)
                printf("%c %d\n",j + 65 , frequency[j]);
        }
    }
    return 0;
}
