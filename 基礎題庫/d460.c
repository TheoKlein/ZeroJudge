#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    printf ("%d\n",(n >= 0)*(n <= 5) * 0
               + (n >= 6)*(n <= 11) * 590
               + (n >= 12)*(n <= 17) * 790
               + (n >= 18)*(n <= 59) * 890
               + (n >= 60) * 399);
    
    return 0;
}
