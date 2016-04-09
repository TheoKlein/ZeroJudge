#include <stdio.h>

int main() {
    int n = 5;
    int sum = 0;
    while(n != 0){
        int input[3] , i;
        scanf("%d%d%d", &input[0] , &input[1] , &input[2]);
        for(i = 0 ; i < 2 ; ++i){
            if(input[i] > input[i+1]){
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
            }
        }
        if(input[0] + input[1] > input[2])
            sum++;
        n--;
    }
    printf("%d\n",sum);
    return 0;
}
