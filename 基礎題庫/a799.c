#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf ("%d",&n);
    if ( n < 0 ){
        n = n * (-1);
    }
    printf ("%d\n",n);
    return 0;
}
