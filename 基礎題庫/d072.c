#include <stdio.h>

int main() {
    int n,num;
    int Case = 1;
    scanf ("%d",&num);
    for (int i = 0 ; i < num ; i++){
        scanf ("%d",&n);
        if ((n % 4 == 0 && n % 100 != 0) || ( n % 400 == 0)){
            printf ("Case %d: a leap year\n",Case);
        }else{
            printf ("Case %d: a normal year\n",Case);
        }
        Case ++;
    }
    return 0;
}
