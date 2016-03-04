#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[25];
    while(gets(input) != NULL){
        unsigned long int length = strlen(input);
        int sum = 0 , i , flag = 0;
        for(i = 0 ; i < length ; ++i){
            if(isupper(input[i]))
                sum += (int)input[i] - 38;
            else
                sum += (int)input[i] - 96;
        }
        if(sum == 1){
            puts("It is a prime word.");
            continue;
        }
        for(i = 2 ; i * i <= sum ; ++i){
            if(sum % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            puts("It is not a prime word.");
        else
            puts("It is a prime word.");
        
    }
    return 0;
}
