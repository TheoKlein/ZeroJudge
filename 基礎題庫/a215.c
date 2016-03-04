#include <stdio.h>

int main() {
    int a,b,n,m,times;
    while(scanf("%d %d",&n,&m)!= EOF){
        times = 1;
        b = 0;
        for(a = n ; ; a++){
            b += a;
            if(b > m){
                break;
            }
            ++ times;
        }
        printf("%d\n",times);
    }
    return 0;
}
