#include <stdio.h>

int main() {
    int num , i , j , k;
    scanf("%d", &num);
    for(i = 1 ; i <= num ; ++i){
        int input[3];
        scanf("%d%d%d", &input[0] ,&input[1] ,&input[2]);
        for(j = 0 ; j < 2 ; ++j){
            for(k = 0 ; k < 2 ; ++k){
                if(input[k] > input[k + 1]){
                    int temp = input[k];
                    input[k] = input[k + 1];
                    input[k + 1] = temp;
                }else
                    continue;
            }
        }
        printf("Case %d: %d\n",i , input[1]);
    }
    return 0;
}
