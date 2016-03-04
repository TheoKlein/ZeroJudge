#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        if(n == 0 || n == 1)
            printf("It's not a prime!!!\n");
        else{
            int i , flag = 0;
            for(i = 2 ; i <= sqrt(n) ; ++i){
                if(n % i == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                printf("It's not a prime!!!\n");
            else
                printf("It's a prime!!!\n");
        }
    }
    return 0;
}
