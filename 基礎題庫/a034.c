#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,j;
    int result[50];
    while (scanf("%d",&n) != EOF){
        for (i = 0 ; ; i ++){
            result[i] = n % 2;
            n /= 2;
            if (n == 0)
                break;
        }
        for (j = i ; j >= 0 ; j --)
            printf("%d",result[j]);
        printf ("\n");
    }
    return 0;
}
