#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,num;
    int first = 0;
    int second = 0;
    int third = 0;
    scanf ("%d",&n);
    
    for (int i = 0 ; i < n ; i++){
        scanf ("%d",&num);
        if (num % 3 == 0)
            first ++;
        else if(num % 3 == 1)
            second ++;
        else if (num % 3 == 2)
            third ++;
    }
    printf ("%d %d %d\n",first,second,third);
    
    return 0;
}
