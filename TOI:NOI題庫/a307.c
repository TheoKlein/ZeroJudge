#include <stdio.h>

int main() {
    long long int input;
    while(scanf("%lld" , &input) != EOF){
        int zeroCheck = 1;
        if(input < 0){
            input *= -1;
            printf("-");
        }
        while(input > 0){
            if(input % 10 == 0 && zeroCheck == 1)
                input /= 10;
            else{
                printf("%lld", input % 10);
                input /= 10;
                zeroCheck = 0;
            }
        }
        puts("");
    }
    return 0;
}
