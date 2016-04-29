#include <stdio.h>

int main() {
    int num , k;
    while(scanf("%d",&num) != EOF){
        for(k = 0 ; k < num ; ++k){
            int a , b , i , check = 0;
            scanf("%d%d",&a ,&b);
            int array[a * b];
            for(i = 0 ; i < a * b ; ++i)
                scanf("%d",&array[i]);
            for(i = 0 ; i < a * b / 2 ; ++i){
                if(array[i] != array[a * b - i - 1]){
                    check = 1;
                    break;
                }
            }
            if(check == 1)
                puts("keep defending");
            else
                puts("go forward");
        }
    }
    return 0;
}
