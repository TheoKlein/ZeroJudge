#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n , i , num;
    scanf ("%d",&n);
    for (i = 0 ; i < n ; i ++){
        scanf ("%d",&num);
        
        int product = 1;
        if (num == 0){
            printf ("0\n");
            continue;
        }
        while (num > 0){
            product *= (num % 10);
            if (product == 0){
                break;
            }else{
                num /= 10;
            }
        }
        
        printf ("%d\n",product);
    }
    return 0;
}
