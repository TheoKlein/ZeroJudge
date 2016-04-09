#include <stdio.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        int sum = 1 , i;
        for(i = 1 ; i <= n ; ++i){
            sum += (i - 1);
        }
        printf("%d\n",sum);
    }
    return 0;
}
