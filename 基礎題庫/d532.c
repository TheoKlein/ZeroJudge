#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a ,b;
    scanf ("%d%d",&a,&b);
    int check = 0;
    
    for (int i = a ; i <= b ; i++){
        if ((i % 4 == 0 && i % 100 != 0) || ( i % 400 == 0)){
            check ++;
        }
    }
    printf ("%d\n",check);
    return 0;
}
