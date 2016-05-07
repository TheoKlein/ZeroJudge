#include <stdio.h>

int main() {
    int num , i , j;
    scanf("%d",&num);
    for(i = 1 ; i <= num ; ++i){
        char url[10][105];
        int relation[10][1] , max = 0;
        for(j = 0 ; j < 10 ; ++j){
            scanf("%s%d",url[j] , relation[j]);
            if(*relation[j] > max){
                max = *relation[j];
            }
        }
        printf("Case #%d:\n",i);
        for(j = 0 ; j < 10 ; ++j){
            if(*relation[j] == max)
                printf("%s\n",url[j]);
        }
    }
    return 0;
}
