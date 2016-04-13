#include <stdio.h>

int main() {
    int num , line = 0;
    scanf("%d",&num);
    while(num-- != 0){
        int A , F;
        scanf("%d%d",&A,&F);
        int i , j , times;
        for(times = 0 ; times < F ; ++times){
            if(line == 1)
                puts("");
            for(i = 1 ; i <= A ; ++i){
                for(j = 1 ; j <= i ; ++j)
                    printf("%d",i);
                puts("");
            }
            for(i = A - 1; i >= 1 ; --i){
                for(j = i ; j >= 1 ; --j)
                    printf("%d",i);
                puts("");
            }
            line = 1;
        }
    }
    return 0;
}

