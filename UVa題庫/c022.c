#include <stdio.h>

int main() {
    int n , j;
    scanf("%d",&n);
    for(j = 1 ; j <= n ; ++j){
        int a , b , i, sum = 0;
        scanf("%d%d",&a ,&b);
        for(i = a ; i <= b ; ++i){
            if(i % 2 != 0)
                sum += i;
        }
        printf("Case %d: %d\n",j , sum);
    }
    return 0;
}
