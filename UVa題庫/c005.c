#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n != 0){
        int times , i;
        double area , num , lv , total = 0;
        
        scanf("%d",&times);
        for(i = 0 ; i < times ; ++i){
            scanf("%lf%lf%lf", &area , &num , &lv);
            total += ( area / num ) * lv * num;
        }
        printf("%.0lf\n",total);
        n--;
    }
    return 0;
}
