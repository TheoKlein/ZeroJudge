#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        int sum = 0;
        int flag = 0;
        printf("%d",n);
        while(n != 1){
            while(n > 0){
                sum += pow((n % 10) , 2);
                n /= 10;
            }
            n = sum;
            sum = 0;
            if(n == 4){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf(" is an unhappy number\n");
        else
            printf(" is a happy number\n");
    }
    return 0;
}
