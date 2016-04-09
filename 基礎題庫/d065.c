#include <stdio.h>

int main() {
    int a,b,c,max;
    while (scanf ("%d%d%d",&a,&b,&c) != EOF){
        if (a > b){
            max = a;
        }else{
            max = b;
        }
        if (max < c){
            max = c;
        }
        printf ("%d",max);
    }
    
    return 0;
}
