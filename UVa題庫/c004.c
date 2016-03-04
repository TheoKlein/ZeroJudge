
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n != 0){
        int s , d;
        double a , b;
        scanf("%d%d", &s , &d);
        a = (double)(s - d) / 2;
        if(a - (int)a == 0){
            if( a < 0 )
                puts("impossible");
            else{
                b = s - a;
                if(a > b)
                    printf("%.0f %.0f\n",a,b);
                else
                    printf("%.0f %.0f\n",b,a);
            }
        }else
            puts("impossible");
        n--;
    }
    return 0;
}
