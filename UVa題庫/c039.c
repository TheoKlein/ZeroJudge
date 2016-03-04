#include <stdio.h>

int main(){
    int i,j;
    
    while (scanf("%d%d",&i,&j) != EOF){
        int ni = i;
        int nj = j;
        
        if ( i > j ) {
            int temp = i;
            i = j;
            j = temp;
        }
        int max = 0;
        
        while (i <= j ){
            unsigned int n = i ;
            int length = 1;
            while ( n != 1 ) {
                if ( n % 2 == 1 ) {
                    n = 3 * n + 1;
                    n /= 2;
                    length += 2;
                }
                else {
                    n /= 2;
                    length++;
                }
            }
            if ( length > max ){
                max = length;
            }
            i++;
        }
        if (ni > nj){
            int temp = ni;
            ni = nj;
            nj = temp;
        }
        printf("%d %d %d\n",ni,nj,max);
    }
    return 0;
}
