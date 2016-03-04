#include <stdio.h>

int main() {
    int n , k;
    while(scanf("%d%d",&n ,&k) != EOF){
        if( k != 0 ){
            if(n % k == 0)
                printf("Ok!\n");
            else
                printf("Impossib1e!\n");
        }else if(n == 0 && k == 0)
            printf("Ok!\n");
        else
            printf("Impossib1e!\n");
    }
    return 0;
}
