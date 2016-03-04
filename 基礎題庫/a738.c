#include <stdio.h>
int GCD(int , int);

int main(int argc, const char * argv[]) {
    int a , b;
    while (scanf ("%d%d",&a,&b) != EOF){
        printf ("%d\n",GCD(a , b));
    }
    return 0;
}

int GCD (int a ,int b){
    if (a == 0){
        return b;
    }else if (b == 0){
        return a;
    }else{
        return GCD(b , a % b);
    }
}
