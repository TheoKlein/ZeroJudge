#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[10000];
    while(gets(input) != NULL){
        if(input[0] == '0' && input[1] == 'x'){
            long int output;
            output = strtol(&input[0] , NULL , 0);
            printf("%ld\n" , output);
        }else{
            int num = atoi(input);
            if(num == -1)
                break;
            else
                printf("0x%X\n",num);
        }
    }
    return 0;
}
