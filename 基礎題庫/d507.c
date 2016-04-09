#include <stdio.h>
#include <math.h>

int main() {
    int input[3] , i;
    for(i = 0 ; i < 3 ; ++i)
        scanf("%d",&input[i]);
    for(i = 0 ; i < 2 ; ++i){
        if(input[i] > input[i+1]){
            int temp = input[i];
            input[i] = input[i+1];
            input[i+1] = temp;
        }
    }
    if(pow(input[0],2) + pow(input[1],2) == pow(input[2],2))
        printf("right triangle\n");
    else if(pow(input[0],2) + pow(input[1],2) < pow(input[2],2))
        printf("obtuse triangle\n");
    else
        printf("acute triangle\n");
    return 0;
}
