#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    while (scanf ("%d%d",&a,&b) != EOF){
        if ( a == 7 && b <= 29){
            printf ("Off School\n");
        }else if (a == 7 && b == 30){
            printf ("At School\n");
        }else if (a > 7 && a < 17){
            printf ("At School\n");
        }else if ( a == 17){
            printf ("Off School\n");
        }else{
            printf ("Off School\n");
        }
    }
    return 0;
}
