#include <stdio.h>

int main() {
    int i , j , n , sum = 0 , times[6] = {0} , num = 0;
    while(scanf("%d",&n) != EOF){
        if(n == 0)
            break;
        else{
            times[n] ++;
            num ++;
            sum += n;
        }
    }
    for(i = 5 ; i > 0 ; --i){
        if(times[i] < 10)
            printf("%d ( %d) |",i , times[i]);
        else
            printf("%d (%d) |",i , times[i]);
        for(j = 0 ; j < times[i] ; ++j)
            printf("=");
        puts("");
    }
    printf("Average rating: %.4f\n",(double)sum / num);
    return 0;
}
