#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf ("%d",&n) != EOF){
        int result = 1 + (n * (pow(n , 2) + 5) / 6);
        printf ("%d\n",result);
    }
    return 0;
}
