#include <stdio.h>

int main() {
    int n , i;
    while(scanf("%d",&n) != EOF && n != 0){
        int sum = 0;
        for(i = 1 ; i <= n ; ++i)
            sum += i * i;
        printf("%d\n",sum);
    }
    return 0;
}
