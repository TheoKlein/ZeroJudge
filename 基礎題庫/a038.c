#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    while (scanf("%d",&n) != EOF){
        int sum = 0;
        while (n > 0){
            sum += n % 10;
            sum *= 10;
            n /= 10;
        }
        sum /= 10;
        printf ("%d\n",sum);
    }
    return 0;
}
