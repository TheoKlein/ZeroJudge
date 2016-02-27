#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int times , a , b , i , j , k;
    scanf ("%d",&times);
    
    for (i = 1 ; i <= times ; i ++){
        int sum = 0;
        scanf ("%d%d",&a,&b);
        for (j = a ; j <= b ; j ++){
            for (k = 1; k <= sqrt(j) ; k ++){
                if (pow (k , 2) == j){
                    sum += j;
                    continue;
                }
            }
        }
        printf ("Case %d: %d\n",i,sum);
    }
    
    return 0;
}
