#include <stdio.h>

int main() {
    int H , M;
    while(scanf("%d%d",&H , &M) != EOF){
        H += 2;
        M += 30;
        if(M >= 60){
            H++;
            M -= 60;
        }
        if(H >= 24)
            H -= 24;
        printf("%.2d:%.2d\n",H,M);
    }
    return 0;
}
