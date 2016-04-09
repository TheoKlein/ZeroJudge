#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    while (n > 50){
        printf ("%d\n",n - 1);
        break;
    }
    while (n <= 50){
        printf ("%d\n",n);
        break;
    }
    return 0;
}
