#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    long long int a,b,c;
    
    scanf ("%d",&n);
    for (int i = 0 ; i < n ; i++){
        scanf ("%lld%lld%lld",&a,&b,&c);
        if ( a == 1){
            printf ("%lld\n", b + c);
        }else if ( a == 2 ){
            printf ("%lld\n", b - c);
        }else if ( a == 3){
            printf ("%lld\n", b * c);
        }else if ( a == 4){
            printf ("%lld\n", b / c);
        }
    }
    
    return 0;
}
