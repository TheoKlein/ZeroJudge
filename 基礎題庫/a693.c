#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n , m , i;
    while (scanf ("%d%d",&n,&m) != EOF){
        int food[100000];
        int sum[100000] = {0};
        for (i = 1 ; i <=n ; i ++){
            scanf ("%d",&food[i]);
            sum[i] = food[i] + sum[i - 1];
        }
        
        for (i = 0 ; i < m ; i ++){
            int a ,b;
            scanf ("%d%d",&a,&b);
            printf ("%d\n",sum[b] - sum[a - 1]);
        }
    }
    return 0;
}
