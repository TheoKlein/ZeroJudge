#include <stdio.h>

int main() {
    int a,b;
    int sum = 0;
    scanf ("%d%d",&a,&b);
    if ( a > b){
        int temp = b;
        b = a;
        a = temp;
    }
    for (int i = a ; i <= b ; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    printf ("%d\n",sum);
    return 0;
}
