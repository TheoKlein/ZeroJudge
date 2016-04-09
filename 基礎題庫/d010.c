#include <stdio.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        int i , sum = 1;
        for(i = 2 ; i < n ; ++i){
            if(n % i == 0)
                sum += i;
        }
        if(sum > n)
            puts("盈數");
        else if(sum < n)
            puts("虧數");
        else
            puts("完全數");
    }
    return 0;
}
