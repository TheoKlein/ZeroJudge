#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main(){
    char input[SIZE] = {0};
    int i, j, max = 0, space = 0;
    
    while ( gets(input) != '\0'){
        if (space == 1){
            puts("");
            space = 0;
        }
        
        int frequency[SIZE] = {0};
        
        for (i = 0 ; input[i] != '\0' ; i ++){
            frequency[input[i]]++;
        }
        for (i = 0 ; i < SIZE ; i++){
            if (frequency[i] > max){
                max = frequency[i];
            }
        }
        
        for(i = 1 ; i <= max ;i++){
            for (j = SIZE - 1 ; j >= 0 ; j--){
                if (frequency[j] == i){
                    printf ("%d %d\n",j ,i);
                    space = 1;
                }
            }
        }
    }
    return 0;
}
