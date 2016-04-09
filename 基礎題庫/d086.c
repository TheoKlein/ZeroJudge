#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[205];
    while(gets(input) != NULL){
        if(input[0] == '0' && input[1] == '\0')
            break;
        else{
            int sum = 0 , i , flag = 0;
            unsigned long int length = strlen(input);
            for(i = 0 ; i < length ; ++i){
                if(isalpha(input[i]))
                    sum += (int)tolower(input[i]) - 96;
                else{
                    printf("Fail\n");
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("%d\n",sum);
        }
    }
    
    return 0;
}
