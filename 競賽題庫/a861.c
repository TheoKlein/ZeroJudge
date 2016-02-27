#include <stdio.h>

int main() {
    int a , b;
    while(scanf("%d%d",&a ,&b) != EOF)
        printf("%d\n", 2 * a + 2 * b);
    return 0;
}
