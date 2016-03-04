#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k;
    int sum;
    while (scanf("%d%d",&n,&k) != EOF){
        sum = n;
        while (n >= k){
            sum += n / k;
            n = n / k + n % k;
        }
        printf ("%d\n",sum);
    }
    
    return 0;
}
