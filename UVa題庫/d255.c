#include <stdio.h>

int GCD(int , int);

int main() {
    int num;
    while(scanf("%d", &num) != EOF){
        if(num == 0)
            break;
        int G = 0 , i , j;
        for(i = 1 ; i < num ; ++i){
            for(j = i + 1 ; j <= num ; ++j)
                G += GCD(i , j);
        }
        printf("%d\n",G);
    }
    return 0;
}

int GCD(int a , int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
