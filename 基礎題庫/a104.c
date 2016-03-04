#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf ("%d",&n) != EOF){
        unsigned int array[n];
        int i , j , space = 0;
        for (i = 0 ; i < n ; i ++){
            scanf ("%u",&array[i]);
        }
        
        for (i = 0 ; i < n ; i ++){
            for (j = 0 ; j < n - 1 ; j ++){
                if (array[j] > array[ j + 1 ]){
                    unsigned int temp = array[j];
                    array[j] = array[ j + 1];
                    array[ j + 1 ] = temp;
                }
            }
        }
        
        for (i = 0 ; i < n ; i ++){
            if (space == 1){
                printf (" ");
            }
            printf("%u",array[i]);
            space = 1;
        }
        puts("");
    }
    return 0;
}
