#include <stdio.h>

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        if(n == 0)
            break;
        char binary[200];
        int i = 0 , count = 0 , j;
        while(n > 0){
            if(n % 2 == 1){
                binary[i] = '1';
                count++;
            }else
                binary[i] = '0';
            ++i;
            n /= 2;
        }
        printf("The parity of ");
        for(j = i - 1 ; j >= 0 ; --j)
            printf("%c",binary[j]);
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
