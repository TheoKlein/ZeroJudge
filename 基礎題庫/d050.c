#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t;
    while (scanf ("%d",&t) != EOF){
        printf ("%d\n",(t + 9) % 24);
    }
    
    return 0;
}
