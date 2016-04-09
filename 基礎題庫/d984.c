#include <stdio.h>

int main() {
    long long int a, b , c;
    while(scanf("%lld%lld%lld",&a,&b,&c) != EOF){
        if(a < b && a < c){
            if(b > c)
                c += a;
            else
                b += a;
            if(b > c)
                printf("B\n");
            else
                printf("C\n");
        }else if(b < a && b < c){
            if(a > c)
                c += b;
            else
                a += b;
            if(a > c)
                printf("A\n");
            else
                printf("C\n");
        }else if(c < a && c < b){
            if(a > b)
                b += c;
            else
                a += c;
            if(a > b)
                printf("A\n");
            else
                printf("B\n");
        }else if(a == b){
            if(a < c)
                printf("C\n");
        }else if(a == c){
            if(a < b)
                printf("B\n");
        }else if(b == c){
            if(a > b)
                printf("A\n");
        }
    }
    return 0;
}
