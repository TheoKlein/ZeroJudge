#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        if(n % 2 != 0)
            printf("%d\n" , n - 1);
        else
            printf("%d\n" , n);
    }
    return 0;
}
