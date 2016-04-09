#include <stdio.h>

int main() {
    int n,num;
    scanf ("%d",&num);
    for (int i = 0 ; i < num ; i ++){
        scanf ("%d",&n);
        if ((n % 4 == 0 && n % 100 != 0) || ( n % 400 == 0)){
            printf ("a leap year\n");
        }else{
            printf ("a normal year\n");
        }
    }
    return 0;
}
