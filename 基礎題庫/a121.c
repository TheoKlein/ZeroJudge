#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a , b , i , j;
    while (scanf ("%d%d",&a,&b) != EOF){
        int times = 0 , flag = 0;
        for (i = a ; i <= b ; i++){
            if (i == 1)
                continue;
            for (j = 2 ; j <= sqrt(i) ; j++){
                if (i % j == 0){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                times++;
            }else{
                flag = 0;
            }
        }
        printf ("%d\n",times);
    }
    return 0;
}i
