#include <stdio.h>

int main() {
    double v , r;
    while(scanf("%lf%lf" , &v , &r) != EOF)
        printf("%.4lf\n", v / r * 1000);
    return 0;
}
