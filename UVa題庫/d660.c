#include <stdio.h>

int main() {
    int n , i , j;
    scanf("%d",&n);
    
    for(i = 1 ; i <= n ; ++i){
        int num , init , high = 0 , low = 0;
        scanf("%d%d",&num,&init);
        for(j = 1 ; j < num ; ++j){
            int temp;
            scanf("%d",&temp);
            if(temp > init)
                high++;
            else if(temp < init)
                low++;
            init = temp;
        }
        printf("Case %d: %d %d\n",i , high , low);
    }
    return 0;
}

