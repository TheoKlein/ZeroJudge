#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[7];
    int i;
    while(gets(input) != NULL){
        for(i = 0 ; i < 6 ; ++i){
            int temp = (int)abs(input[i + 1] - input[i]);
            printf("%d",temp);
        }
        puts("");
    }
    return 0;
}
