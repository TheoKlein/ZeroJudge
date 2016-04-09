#include <stdio.h>

int main() {
    int n;
    int doz,single;
    scanf ("%d",&n);
    doz = (n / 12)*50;
    single = (n % 12)*5;
    printf ("%d\n",doz+single);
    
    return 0;
}
