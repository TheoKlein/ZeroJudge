#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100000];
    while(gets(input) != NULL){
        long int sum = 0;
        char *ptr;
        ptr = strtok(input , " ");
        while(ptr != NULL){
            sum += atoi(ptr);
            ptr = strtok(NULL , " ");
        }
        printf("%ld\n",sum);
    }
    return 0;
}
