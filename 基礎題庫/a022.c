#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char input[1000];
    int i;
    
    while (gets(input) != '\0'){
        int flag = 1;
        unsigned long int length = strlen(input);
        
        for (i = 0 ; i < (length / 2) ; i++){
            if (input[i] != input [length - i - 1]){
                printf ("no\n");
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf ("yes\n");
            flag = 0;
        }
    }
    return 0;
}
