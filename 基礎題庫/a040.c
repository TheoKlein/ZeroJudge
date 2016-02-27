#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a , b;
    while(scanf("%d%d", &a , &b) != EOF){
        int i , flag = 0 , blank = 0;
        for(i = a ; i <= b ; ++i){
            int temp = i , j , pows = 0 , num[7] , sum = 0;
            while(temp > 0){
                num[pows] = temp % 10;
                temp /= 10;
                pows ++;
            }
            for(j = 0 ; j < pows ; ++j)
                sum += pow(num[j] , pows);
            if(sum == i){
                if(blank == 1){
                    printf(" ");
                    blank = 0;
                }
                printf("%d",sum);
                blank = 1;
                flag = 1;
            }
        }
        if(flag == 0)
            puts("none");
        else
            puts("");
    }
    return 0;
}
