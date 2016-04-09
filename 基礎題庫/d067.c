#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    if (n % 4 == 0 && n % 100 != 0){
        printf ("a leap year\n");
    }else if ( n % 400 == 0){
        printf ("a leap year\n");
    }else{
        printf ("a normal year\n");
    }
    
    return 0;
}
