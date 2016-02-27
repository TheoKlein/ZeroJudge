#include <stdio.h>

int main() {
    int n,score;
    while (scanf ("%d",&n) != EOF){
        if (n >=0 && n <= 10){
            score = n * 6;
            printf ("%d\n",score);
        }else if (n >= 11 && n <= 20){
            score = (n-10) * 2 + 60;
            printf ("%d\n",score);
        }else if (n >= 21 && n <= 40){
            score = (n - 20) + 80;
            printf ("%d\n",score);
        }else if (n > 40){
            score = 100;
            printf ("%d\n",score);
        }
    }
    
    return 0;
}
