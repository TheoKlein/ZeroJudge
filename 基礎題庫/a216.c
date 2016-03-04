#include <stdio.h>
long long int g(long long int);

int main() {
    long long int n;
    while(scanf("%llu",&n) != EOF)
        printf("%llu %llu\n", n * (n + 1) / 2 , g(n));
    return 0;
}

long long int g(long long int n){
    if(n == 1)
        return 1;
    else
        return n * (n + 1) / 2 + g(n - 1);
    return 0;
}
