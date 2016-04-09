#include <stdio.h>

int main() {
    int n , blank = 1 , i , j;
    while(scanf("%d",&n) != EOF){
        if(n == 0)
            break;
        else{
            if(blank == 0)
                puts("");
            for(i = 1 ; i <= n ; ++i){
                for(j = n - i ; j > 0 ; --j)
                    printf("_");
                for(j = 0 ; j < i ; ++j)
                    printf("+");
                puts("");
            }
            blank = 0;
        }
    }
    return 0;
}
