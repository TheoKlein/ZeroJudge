#include <stdio.h>

int main() {
    long long int a,b;
    while (scanf ("%lld%lld",&a,&b) != EOF){
        if (a > b){
            long long int temp = b;
            b = a;
            a = temp;
        }
        printf ("%lld",b-a);
    }
    
    return 0;
}
