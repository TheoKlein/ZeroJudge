#include <stdio.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        if(n < 0)
            break;
        if(n == 0){
            puts("0");
            continue;
        }
        char result[100];
        int i = 0 , j;
        while(n > 0){
            result[i] = n % 3;
            ++i;
            n /= 3;
        }
        for(j = i - 1 ; j >= 0 ; --j)
            printf("%d",result[j]);
        puts("");
    }
    return 0;
}
