#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    int n;
    scanf("%d%c" ,&n , &c);
    while(n > 0){
        char input[1000000];
        int sum = 0;
        char * ptr;
        gets(input);
        ptr = strtok(input , " +");
        while(ptr != NULL){
            sum += atoi(ptr);
            ptr = strtok(NULL , " +");
        }
        printf("%d\n",sum);
        --n;
    }
    return 0;
}
