#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n, result;
    while (scanf ("%d",&n) != EOF){
        result = pow (n , 2) - n + 2;
        printf ("%d\n",result);
    }
    return 0;
}
